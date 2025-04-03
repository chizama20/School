public class CruiseShip extends Ship implements Comparable<CruiseShip>{
    private final int max_passengers; //passenger variable

    public CruiseShip(String name, int year, int max_passengers){
        super(name, year);
        this.max_passengers = max_passengers;
    }

    @Override// get functions
    public String getName(){
        return super.getName();
    }

    public int getMax_passengers(){
        return max_passengers;
    }

    @Override
    public String toString(){
        return "Name: " + getName() + 
                "\nYear: " + getYear() +
                "\nMaximum passengers: " + max_passengers;
    }

    @Override // compare function
    public int compareTo(CruiseShip other){
        return Integer.compare(this.max_passengers, other.max_passengers);
    }
}

