<?php
$servername = "your-db-instance-endpoint";
$username = "your-username";
$password = "your-password";
$dbname = "student_demo_registration";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $id = $_POST['id'];
    $first_name = $_POST['first_name'];
    $last_name = $_POST['last_name'];
    $project_title = $_POST['project_title'];
    $email = $_POST['email'];
    $phone = $_POST['phone'];
    $time_slot = $_POST['time_slot'];

    // Check if student is already registered
    $sql = "SELECT * FROM students WHERE id = $id";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
        // Student already registered
        echo "Student already registered. <a href='index.html'>Go back</a>";
    } else {
        // Check if time slot is available
        $sql = "SELECT remaining_seats FROM time_slots WHERE slot = '$time_slot'";
        $result = $conn->query($sql);
        $row = $result->fetch_assoc();

        if ($row['remaining_seats'] > 0) {
            // Register student
            $sql = "INSERT INTO students (id, first_name, last_name, project_title, email, phone, time_slot)
                    VALUES ('$id', '$first_name', '$last_name', '$project_title', '$email', '$phone', '$time_slot')";
            if ($conn->query($sql) === TRUE) {
                // Update remaining seats
                $sql = "UPDATE time_slots SET remaining_seats = remaining_seats - 1 WHERE slot = '$time_slot'";
                $conn->query($sql);

                echo "Registration successful! <a href='index.html'>Go back</a>";
            } else {
                echo "Error: " . $sql . "<br>" . $conn->error;
            }
        } else {
            echo "Selected time slot is full. <a href='index.html'>Go back</a>";
        }
    }
}

$conn->close();
?>
