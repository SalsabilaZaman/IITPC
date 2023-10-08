public class EncryptionUtil
{
    public String encrypt( String password )
    {
        String temp1, temp2;
        temp1 = password.substring(0,2);
        temp2 = password.substring(2);

        return temp2+temp1 ;
    }

    public String decrypt( String password )
    {
        String temp1, temp2;
        temp1 = password.substring(password.length()-2 );
        temp2 = password.substring( 0, password.length()-2 );

        return temp1+temp2 ;
    }
}
