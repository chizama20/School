
import java.util.ArrayList;
import java.util.Collections;

public class ShipDemo {
    public static void main(String[] args) throws Exception {

        //list of cruise ships for testing
        ArrayList<CruiseShip> cruiseShips = new ArrayList<>();
        cruiseShips.add(new CruiseShip("Disney Magic", 1998, 2500));
        cruiseShips.add(new CruiseShip("Black Pearl", 1960, 400));
        cruiseShips.add(new CruiseShip("Lolipop", 1988, 1200));
    
        System.out.println("Before sorting");
        for (CruiseShip ship : cruiseShips) {
            System.out.println(ship);
            System.out.println("------------------");
        }

        Collections.sort(cruiseShips);
        System.out.println("\nAfter sorting");
        for (CruiseShip ship : cruiseShips) {
            System.out.println(ship);
            System.out.println("------------------");
        }
    
    }
}
