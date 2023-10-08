public class rec_permutation 
{
    public static void printPerm(String str,  String permutaion) 
    {
        if(str.length()==0)
        {
            System.out.println(permutaion);
            return;
        }

        for(int i=0; i<str.length(); i++)
        {
            char curChar = str.charAt(i);
            String newStr = str.substring(0, i) + str.substring(i+1);
            printPerm(newStr, permutaion+curChar);
        }
        
    }
    public static void main(String[] args) {
        String str = "abc" ;
        printPerm(str, "");
    }
    
}
