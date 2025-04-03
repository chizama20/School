public class Ship {
    private final String name; // main ship class has the name and the year
    private final int year;

    public Ship(String name, int year){
        this.name = name;
        this.year = year;
    }
    //get functions
    public String getName(){
        return name;
    }
    public int getYear(){
        return year;
    }

    @Override // to display our ship
    public String toString(){
        return "Name: " + name + 
                "\nYear: " + year;
    }

}
