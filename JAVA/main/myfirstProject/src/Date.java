public class Date {
    private final int day, month, year; // variable to hold different dates

    public Date(int day, int month, int year){
        this.day = day;
        this.month = month;
        this.year = year;
    }
    // get date
    public String getDate(){
        return day + "/" + month + "/" + year;
    } 
}
