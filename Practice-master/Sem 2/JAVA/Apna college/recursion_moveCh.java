public class recursion_moveCh 
{
    public static void MoveAllx( String str, int idx, int count, String news ) 
    {
        if(idx == str.length())
        {
            for(int i=0; i<count; i++)
            {
                news += 'x' ;
            }
            System.out.println( news );
            return ;
        }

        char currChar = str.charAt(idx);
        if(currChar == 'x')
        {
            count++ ;
            MoveAllx(str, idx+1, count, news);
        }
        else
        {
            news += currChar ;
            MoveAllx(str, idx+1, count, news);
        }
    }

    public static void main(String[] args) 
    {
        String str = "sdkbzbxoxboxds";
        MoveAllx(str, 0, 0, "");   
    }
    
}
