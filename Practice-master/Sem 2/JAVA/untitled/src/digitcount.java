import java.util.Scanner;

public class digitcount
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

//        int num = sc.nextInt();
//        int count = 0;
//        while( num != 0)
//        {
//            num/=10 ;
//            count ++ ;
//        }
//        System.out.println("Digit:"+count);

        String str = sc.nextLine();
        int num = str.length();
        System.out.println("Digit :"+num);
    }
}
