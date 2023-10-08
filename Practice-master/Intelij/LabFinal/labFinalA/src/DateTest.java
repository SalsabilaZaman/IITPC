import java.util.Scanner;

public class DateTest
{
    public void demonstrate()
    {
        Date d1 = new Date(12, 25, 2022);
        Date d2 = new Date(7, 20);

        System.out.println("1st date:");
        d1.displayDate();

        System.out.println("\n2nd date:");
        d2.displayDate( 5 );

//        System.out.println("The date of Date-1 : " + d1.getDay() );
//        System.out.println("The year of Date-1 : " + d1.getYear() );
//        System.out.println("The month of Date-2 : " + d2.getMonth() );
    }

}
