public class rel_logic_op
{
    public static void main(String[] args)
    {
        int i=13;
        int j=28;
        System.out.println(i==j);
        System.out.println(i>j);
        System.out.println(i<j);
        System.out.println(i>=j);
        System.out.println(i<=j);

        System.out.println(i==j || i<j);
        System.out.println(!(i==j || i<j));
        System.out.println(i<j || i<=j);
    }
}
