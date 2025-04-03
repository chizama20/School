import java.io.*;
import java.util.Scanner;

public class CodeProgram {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to CodeProgram!");
        System.out.println("Choose an encoding method:");
        System.out.println("1. Substitution Cipher");
        System.out.println("2. Shuffle Cipher");
        int choice = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        MessageEncoder encoder = null;
        MessageDecoder decoder = null;

        if (choice == 1) { // Choice between substitution and shuffle
            System.out.print("Enter shift value for Substitution Cipher: ");
            int shift = scanner.nextInt();
            encoder = new SubstitutionCipher(shift);
            decoder = new SubstitutionCipher(shift);
        } else if (choice == 2) {
            System.out.print("Enter number of shuffles for Shuffle Cipher: ");
            int n = scanner.nextInt();
            encoder = new ShuffleCipher(n);
            decoder = new ShuffleCipher(n);
        } else {
            System.out.println("Invalid choice. Exiting...");
            return;
        }

        scanner.nextLine(); // Consume newline

        System.out.print("Enter input file name: "); // Entering in file
        String inputFile = scanner.nextLine();
        System.out.print("Enter output file name: ");
        String outputFile = scanner.nextLine();

        System.out.println("Choose an operation:");
        System.out.println("1. Encode message");
        System.out.println("2. Decode message");
        int operation = scanner.nextInt();

        try { // Using operation to  encode/decode 
            String message = readFile(inputFile);

            if (operation == 1) {
                String encodedMessage = encoder.encode(message);
                writeFile(outputFile, encodedMessage);
                System.out.println("Message encoded and saved to " + outputFile);
            } else if (operation == 2) {
                String decodedMessage = decoder.decode(message);
                writeFile(outputFile, decodedMessage);
                System.out.println("Message decoded and saved to " + outputFile);
            } else {
                System.out.println("Invalid operation. Exiting...");
            }

        } catch (IOException e) {
            System.out.println("Error reading or writing file: " + e.getMessage());
        }

        scanner.close();
    }
    // reading the file 
    private static String readFile(String fileName) throws IOException {
        StringBuilder content = new StringBuilder();
        try (BufferedReader reader = new BufferedReader(new FileReader(fileName))) {
            String line;
            while ((line = reader.readLine()) != null) {
                content.append(line).append("\n");
            }
        }
        return content.toString().trim();
    }

    private static void writeFile(String fileName, String content) throws IOException {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(fileName))) {
            writer.write(content);
        }
    }
}
