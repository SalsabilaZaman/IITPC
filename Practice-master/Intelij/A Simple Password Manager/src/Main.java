import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<AuthenticateInfo> authenticateInfoList = new ArrayList<>();
        Application passwordManager = new Application(authenticateInfoList);
        passwordManager.start();
        passwordManager.displayUserList();
    }
}
