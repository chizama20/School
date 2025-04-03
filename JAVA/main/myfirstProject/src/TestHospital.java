public class TestHospital {
    public static void main(String[] args) throws Exception {
        //test function
        Date checkIn = new Date(3, 22, 2021);
        Date checkOut = new Date(3, 25, 2021);

        Doctor doctor = new Doctor("John", "Wayne", "Cardiologists");

        Patient patient = new Patient("Sam", "Lucas", 26789654, doctor, checkIn, checkOut);
        
        Bill bill = new Bill(000001, 245, 2590, 3550);

        System.out.println(patient);
        System.out.println(bill);
    }

    
    
}

