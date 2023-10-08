public class Date implements DisplayDate
{
    private int month ;
    private int day ;
    private int year ;

    public Date(int month, int day, int year)
    {
        this.month = month;
        this.day = day;
        this.year = year;
    }

    public Date(int month, int day)
    {
        this.month = month;
        this.day = day;
        this.year = 2023 ;
    }

    public void displayDate()
    {
        System.out.println( this.day + "/" + this.month + "/" + this.year );
    }
    public void displayDate( int integer)
    {
        System.out.println( this.month + "." + this.day + "." + this.year );
    }

    public int getMonth() {
        return month;
    }

    public int getDay() {
        return day;
    }

    public int getYear() {
        return year;
    }
}
