import java.util.Scanner;
public class input
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("A = ");
        String a = sc.nextLine();
        System.out.println(a);
        System.out.print("I = ");
        int i = sc.nextInt();
        System.out.println(i);
        System.out.print("F = ");
        float f = sc.nextFloat();
        System.out.println(f);
        System.out.println("F ="+f);
        System.out.println(i+f);

    }
}
