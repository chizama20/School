public class TankerShip extends Ship implements Comparable<TankerShip>{
    private final String type;
    private final double tonnage; //type and weight functions

    public TankerShip(String name, int year, String type, double tonnage){
        super(name, year);
        this.type = type;
        this.tonnage = tonnage;
    }

        //get functions
    @Override
    public String getName(){
        return super.getName();
    }
    public String getType(){
        return type;
    }

    public double getTonnage(){
        return tonnage;
    }

    @Override
    public String toString(){
        return "Name: " + getName() + 
                "\nYear: " + getYear() +
                "\nType: " + type +
                "\nCapacity: " + tonnage;
    }

    @Override //compare to other
    public int compareTo(TankerShip other){
        return this.type.compareTo(other.type);
    }
}
