import java.util.ArrayList;
import java.util.Scanner;

public class Application extends EncryptionUtil{
    private ArrayList<AuthenticateInfo> authenticateInfoList;

    public Application(ArrayList<AuthenticateInfo> authenticateInfoList) {
        this.authenticateInfoList = authenticateInfoList;
    }
    public ArrayList<AuthenticateInfo> getAuthenticateInfoList() {
        return authenticateInfoList;
    }
    public void start(){
        Scanner sc = new Scanner(System.in);
        int choice;
        while(true){
            System.out.println("Options:\n1.New Login Info\n2.View Login Info\nPress anything else to exit the Application");
            System.out.println("Enter your choice: ");
            choice = sc.nextInt();
            if(choice == 1){
                System.out.println("Enter URL:" );
                String URL = sc.next();
                System.out.println("Enter your Username: ");
                String username = sc.next();
                System.out.println("Password: ");
                String password = sc.next();
                AuthenticateInfo info = new AuthenticateInfo(URL,username,password);
                AuthenticateInfo entry = createLoginRecord(info);
                System.out.println(entry);
            }else if(choice == 2){
                System.out.println("Enter URL to view Login info: ");
                String URL = sc.next();
                AuthenticateInfo entry = viewLoginRecord(URL);
                for (AuthenticateInfo x: authenticateInfoList) {
                    if(x.getUsername() == entry.getUsername())System.out.println(entry);
                }
            }else{
                System.err.println("Exiting Application...");
                break;
            }
        }
    }

    public AuthenticateInfo createLoginRecord(AuthenticateInfo info){
        info.setPassword(this.encrypt(info.getPassword()));
        authenticateInfoList.add(info);
        return info;
    }
    public AuthenticateInfo viewLoginRecord(String URL){
        for(AuthenticateInfo x: authenticateInfoList){
            if(URL.equals(x.getURL())){
                x.setPassword(this.decrypt(x.getPassword()));
                return x;
            }
        }
        return null;
    }
    public void displayUserList(){
        for(AuthenticateInfo x : authenticateInfoList)
            System.out.println("URL: " + x.getURL() +" Username: " + x.getUsername()+ " Encrypted Password: " + x.getPassword());
    }
//    public void viewLoginRecord(AuthenticateInfo entry){
//        System.out.println("URL: " + entry.getURL() +" Username: " + entry.getUsername()+ " Encrypted Password: " + entry.getPassword());
//    }
}
