public class recursion_power
{
    public static int pow(int x, int n) 
    {
        if(n==0)
        {
            return 1;
        }
        if(x==0)
        {
            return 0;
        }
        
        int xo = pow(x, n-1);
        int xn = x*xo ;
        return xn;
    }

    public static void main(String[] args) 
    {
        int x=2, n=5;
        int output = pow(x,n);
        System.out.println(output);    
    }
    
}