public class Main
{
    public static void main(String[] args)
    {
//        DateTest tester1 = new DateTest();
//        tester1.demonstrate();

        test( 2, 2);
        test( );
        test( 2);
        test( 2.12);
        System.out.println( test( 3.25) );

    }

    static void test()
    {
        System.out.println("No parameters");
    }
    static void test(int a)
    {
        System.out.println("a: " + a);
    }
    static void test(int a, int b)
    {
        System.out.println("a and b: " + a + " " + b);
    }
    static double test(double a)
    {
        System.out.println("double a: " + a);
        return a*a;
    }
}