public class Person {
    private final String fname; //person function contains the name
    private final String lname;

    public Person(String fname, String lname){
        this.fname = fname;
        this.lname = lname;
    }

    public String getName(){
        return fname + " " + lname;
    }
}
