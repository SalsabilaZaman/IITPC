import java.util.ArrayList;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in) ;
        ArrayList<Items > items = new ArrayList<>();
        Items pen = new Items( "Pen", 5, 100 );
        Items pencil = new Items( "Pencil", 10, 100 );
        Items eraser = new Items( "Eraser", 5, 50 );

        items.add(pen);
        items.add(pencil);
        items.add(eraser);

        User u1 = new User( "Shaikh", "536221" );

        Shop shop = new Shop(items);

        int num = 1 ;
        while ( num!= 0 )
        {
            shop.showList();
            System.out.print("Enter product Name and Amount to add in the cart : ( Enter 0 for Payment )");
            String pr = sc.next();
            num = sc.nextInt();
            for ( Items i : shop.getItems() )
            {
                if (i.getName().equals(pr)) {
                    u1.addToCart(i, num);
                }
            }

        }

        while (u1.payment());






    }
}