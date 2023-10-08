public class bitwise_op
{
        public static void main(String[] args)
        {
            int i=9;
            int j=10;
            System.out.println(i|j);
            System.out.println(i&j);
            System.out.println(i^j);

            System.out.println(i<<1);    // a<<b = a*2^b
            System.out.println(i<<2);
            System.out.println(i>>1);    // a>>b = a/2^b
            System.out.println(i>>2);

            System.out.println(~i);

        }
}
