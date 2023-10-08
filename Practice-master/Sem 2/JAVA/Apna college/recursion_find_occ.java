public class recursion_find_occ 
{
    public static int first = -1 ;
    public static int last = -1 ;
    public static void findOcc(String str, int idx, char ch) 
    {
        if(idx == str.length())
        { 
            if(first == -1) 
            {
                System.out.println("Not found");
                return;
            }
            System.out.println("First : " + first);
            System.out.println("Last : " + last);      
            return ;
        }

        char currChar = str.charAt(idx);
        if(currChar == ch)
        {
            if (first == -1) 
            {
                first = idx ;
                last = idx ;   
            }
            else
            {
                last = idx ;
            }
        }
        findOcc(str, idx+1, ch);
        
    }
    
    public static void main(String[] args) 
    {
        String str = "jksaajbksaubakjs";
        findOcc(str, 0, 's');    
    }
}
