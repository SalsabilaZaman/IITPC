public class rec_totalplacement
{
    public static int placeTiles(int n, int m) 
    {
        if (n == m) 
        {
            return 2;    
        }
        if (n < m) 
        {
            return 1;   
        }

        int vertPlace = placeTiles(n-m, m);
        int horPlace = placeTiles(n-1, m);
        
        return vertPlace + horPlace ;
    }

    public static void main(String[] args) 
    {
        int n=4, m=2 ;
        int totalPlacement = placeTiles(n,m);
        System.out.println(totalPlacement);   
    }
    
}
