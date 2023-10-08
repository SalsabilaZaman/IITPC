import java.util.Scanner;

public class decToBin
{
    public static void main(String[] args)
    {
        System.out.print("Decimal : ");
        Scanner sc = new Scanner(System.in);
        int dec = sc.nextInt();
        int ans = 0 ;
        int pow = 1;
        while (dec>0)
        {
            int digit = dec % 2;
            ans = ans + digit * pow;
            pow *= 10 ;
            dec/=2 ;
        }
        System.out.println("Binary:"+ans);
    }
}
