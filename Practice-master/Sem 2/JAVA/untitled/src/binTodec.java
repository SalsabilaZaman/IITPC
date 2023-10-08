import java.util.Scanner;

public class binTodec
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int bin = sc.nextInt();
        int ans = 0 ;
        int pow = 1;
        while (bin>0)
        {
            int digit = bin % 10;
            ans = ans + digit * pow;
            pow *= 2 ;
            bin/=10 ;
        }
        System.out.println("Decimal:"+ans);
    }
}
