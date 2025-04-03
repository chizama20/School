public class CargoShip extends Ship implements Comparable<CargoShip>{
    private final int tonnage; // weight variable

    public CargoShip(String name, int year, int tonnage){
        super(name, year);
        this.tonnage = tonnage;
    }

    @Override // get functions
    public String getName(){
        return super.getName();
    }

    public int getTonnage(){
        return tonnage;
    }

    @Override 
    public String toString(){
        return "Name: " + getName() + 
                "\nYear: " + getYear() +
                "\nCargo: " + tonnage;
    }

    @Override// comparing to other ships
    public int compareTo(CargoShip other){
        return Integer.compare(this.tonnage, other.tonnage);
    }
}
