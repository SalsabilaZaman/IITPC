import static java.lang.Math.pow;

public class ps {
    public static void main(String[] args)
    {
        int i, x=13;
        System.out.println(x);
        for ( i=2; i<=pow(x,.5); i++)
        {
            if (x%i==0) System.out.println("Non prime.");
        }
        if (i>pow(x,.5)) System.out.println("Prime.");

    }
}
