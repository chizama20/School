public class Patient extends Person {
    private int id;
    private final Doctor physician;
    private final Date check_in, check_out; //Patient gets id doctor and dates for check in and check out

    public Patient(String fname, String lname, int id, Doctor physician, Date check_in, Date check_out){
        super(fname, lname);
        this.physician = physician;
        this.check_in = check_in;
        this.check_out = check_out;
    }
    
    @Override //get functions
    public String getName(){
        return super.getName();
    }

    public int getID(){
        return id ;
    }
    public Doctor getPhysician(){
        return physician;
    }
    
    public Date getCheck_in(){
        return check_in;
    }
    public Date getCheck_out(){
        return check_out;
    }
    
    @Override //tostring methid
    public String toString(){
        return "Patient: " + getName() +
                "\nID: " + id + 
                "\nAttending Physician: " + physician + 
                "\nAdmit Date: " + check_in +
                "\nDischarge Date: " + check_out;


    }
}

