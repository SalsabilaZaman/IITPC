import java.util.ArrayList;

public class AuthenticationInfo extends EncryptionUtil
{
    private String URL;
    private String userID;
    private String password;

    public AuthenticationInfo(String URL, String userID, String password)
    {
        this.setURL(URL) ;
        this.setUserID(userID);
        this.setPassword(password);
    }


    public String getURL()
    {
        return URL;
    }

    public String getUserID()
    {
        return userID;
    }

    public String getPassword()
    {
        return  this.password  ;
    }

    public void setURL(String URL)
    {
        this.URL = URL;
    }

    public void setUserID(String userID)
    {
        this.userID = userID;
    }

    public void setPassword(String password)
    {
        this.password =  password  ;
    }

    @Override
    public String toString()
    {
        return this.getUserID()+" : "+ this.getPassword() ;
    }
}