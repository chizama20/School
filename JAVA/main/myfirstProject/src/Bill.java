public class Bill {
    private final int id, pharmacy_fee, room_rent, doctor_fee; // we have are different bills to take care off

    public Bill(int id, int pharmacy_fee, int room_rent, int doctor_fee) {
        this.id = id;
        this.pharmacy_fee = pharmacy_fee;
        this.room_rent = room_rent;
        this.doctor_fee = doctor_fee;
    }
    // get functions
    public int getID() {
        return id;
    }

    public int getPharmacy_fee() {
        return pharmacy_fee;
    }

    public int getRoom_rent() {
        return room_rent;
    }

    public int getDoctor_fee() {
        return doctor_fee;
    }

    public int calculateTotal() {
        return pharmacy_fee + room_rent + doctor_fee;
    }

    @Override // tostring override
    public String toString() {
        return "Bill ID: " + id +
               "\nPharmacy Fee: $" + pharmacy_fee +
               "\nRoom Rent: $" + room_rent +
               "\nDoctor Fee: $" + doctor_fee +
               "\n-------------------------------------" + 
               "\nTotal Bill: $" + calculateTotal();
    }
}
