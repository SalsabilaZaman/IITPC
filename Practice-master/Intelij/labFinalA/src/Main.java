import java.io.IOException;
import java.util.ArrayList;

public class Main
{
    public static void main(String[] args) throws IOException
    {
        ArrayList<AuthenticationInfo> list = new ArrayList<>() ;
        Application ap = new Application(list);
        ap.start();

        FruitPanda.main(args);
    }
}