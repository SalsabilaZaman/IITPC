public class TowerOfHanoi 
{
    /*
            *       *       *
            *       *       *
            *       *       *
            *       *       *
            *       *       *
            *       *       *
        Tower-1 Tower-2  Tower-3
        source  helper  destination


        n disks --> (n-1) disks in helper from src ---> first disk to destination(1 step) ---> (n-1) disks from 
                                                                                            helper to src to dest
    */
    public static void towerOfHanoi(int n, String src, String helper, String dest){
        if(n == 1){
            System.out.println("transfer disk " + n + " from " + src + " to " + dest);
            return;
        }
        // transfer (n-1) disk from source to helper
        towerOfHanoi(n-1, src, dest, helper);
        System.out.println("transfer disk " + n + " from " + src + " to " + dest);
        towerOfHanoi(n-1, helper,src, dest);

    }

    public static void main(String[] args) {
        int n = 3; // 3 disks
        towerOfHanoi(n, "S", "H", "D");

    }
}