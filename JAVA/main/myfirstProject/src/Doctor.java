public class Doctor extends Person {
    private final String specialty; // doctor has specialty variable

    public Doctor(String fname, String lname, String specialty){
        super(fname, lname);
        this.specialty = specialty;

    }
    @Override // get functions
    public String getName(){
        return super.getName();
    }

    public String getSpecialty(){
        return specialty;
    }
}
