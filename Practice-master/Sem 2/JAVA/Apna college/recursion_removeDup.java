public class recursion_removeDup 
{
    public static boolean map[] = new boolean[26];

    public static void Rem_dup( String str, int idx, String newst) 
    {
        if (idx == str.length()) 
        {
            System.out.println(newst);  
            return ;  
        }

        char currChar = str.charAt(idx);
        if ( map[currChar - 'a'] ) 
        {
            Rem_dup(str, idx+1, newst);    
        }
        else
        {
            newst += currChar;
            map[currChar - 'a'] = true ;
            Rem_dup(str, idx+1, newst);
        }
        
    }

    public static void main(String[] args) 
    {
        String str = "aabbcdcea";
        Rem_dup(str, 0, "");
    }
    
}
