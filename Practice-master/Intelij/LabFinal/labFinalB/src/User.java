import java.util.ArrayList;
import java.util.Scanner;

public class User extends Payment
{
    private String name;
    private String contactNumber;
    private int totalBill ;

    ArrayList<Items> inCart = new ArrayList<>();
    ArrayList<Integer> amount = new ArrayList<>() ;

    public User(String name, String contactNumber ) {
        this.name = name;
        this.contactNumber = contactNumber;
        this.totalBill = 0;
    }

    public void addToCart (Items item , int nos )
    {
        if( item.getQuantity() >= nos )
        {
            inCart.add(item) ;
            amount.add(nos) ;
            this.totalBill = this.totalBill + item.getUnitPrice()*nos ;
            item.setQuantity( item.getQuantity()-item.getUnitPrice()*nos );
        }
        else
        {
            System.out.println("Not enough amount of " + item.getName() + ".\nCan't Order more than " + item.getQuantity());
        }

    }


    @Override
    public boolean payment()
    {
        boolean done = false;
        Scanner sc = new Scanner(System.in);
        System.out.println("Payment Through: \n1. Cash : \n2. Credit Card : \n3. Others :\n");
        int choice = sc.nextInt();
        if( choice == 1 )
        {
            System.out.print("Enter Amount : ");
            int given = sc.nextInt();
            System.out.println("Change will be : " + (given-this.totalBill) );
            this.totalBill = 0 ;
            done = true;
        }
        else if ( choice == 2 )
        {
            System.out.print("Enter Credit Card number : ");
            String cardNumber = sc.next();
            if ( isOkCreditCard(cardNumber) )
            {
                System.out.println("Payment done through Credit Card .");
                this.totalBill = 0 ;
                done = true ;
            }
            else
            {
                System.out.println("Invalid Credit Card");
            }
        }
        else if ( choice == 3 )
        {
            System.out.println("Will come soon");
        }
        else System.out.println("Invalid Choice.");

        return done ;
    }

    public boolean isOkCreditCard( String cardNumber )
    {
        return cardNumber.length()==10 ;
    }
}
