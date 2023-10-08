import java.io.IOException;
import java.util.ArrayList;
import java.util.*;

public class Application
{
    private final  ArrayList<AuthenticationInfo> list ;

    public Application( ArrayList<AuthenticationInfo> list )
    {
        this.list = list;
    }

    public AuthenticationInfo createLogin( AuthenticationInfo object )
    {
        object.setPassword(object.encrypt(object.getPassword()));
        list.add( object );
        return object;
    }

    public void start() throws IOException
    {
        Scanner sc = new Scanner(System.in);
        while ( true )
        {
            System.out.print("1.New Login Info : \n2.View Login Info : \n3.Exit : \nChoice : ");
            int choice = sc.nextInt();
            if (choice == 1)
            {
                String in1, in2, in3;
                System.out.print("Enter URL : ");
                in1 = sc.next();
                System.out.print("Enter User Id : ");
                in2 = sc.next();
                System.out.print("Enter Password : ");
                in3 = sc.next();
                AuthenticationInfo object = new AuthenticationInfo(in1, in2, in3);
                AuthenticationInfo added = createLogin(object);
                System.out.println(added);
            }
            else if (choice == 2)
            {
                System.out.print("URL : ");
                String url = sc.next();
                ArrayList<AuthenticationInfo> users ;
                users = viewLoginInfo(url);
                System.out.println(users);
            }
            else if (choice == 3)
            {
                break;
            }
            else
            {
                System.err.println("Invalid Input.");
            }

            System.out.println("Press enter to continue : ");
            System.in.read();
        }
    }

    ArrayList<AuthenticationInfo> viewLoginInfo( String url )
    {
        ArrayList < AuthenticationInfo > authList = new ArrayList<>();
        for ( AuthenticationInfo ai : list )
        {
            if(ai.getURL().equals(url))
            {
                ai.setPassword(ai.decrypt(ai.getPassword()));
                authList.add(ai);
            }
        }
        return authList;
    }
}