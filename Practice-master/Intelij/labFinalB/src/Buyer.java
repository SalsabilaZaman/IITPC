import java.util.Scanner;

public class Buyer extends User
{
    protected String address ;
    private double rewards ;

    Order order ;

    public Buyer(String firstName, String lastName, int phoneNumber, String address)
    {
        super(firstName, lastName, phoneNumber);
        this.address = address ;
    }

     public Order placeOrder(Seller seller)
    {
        Order newOrder = new Order();
        newOrder.seller = seller;
        newOrder.buyer = this ;
        Scanner sc = new Scanner(System.in);
        System.out.println(seller);
        seller.showList();
        System.out.print( "Which fruit of which variety at what quantity : ");
        String fruit = sc.next();
        String variety = sc.next();
        int amt = sc.nextInt() ;
        newOrder.amountFruit.add( amt ) ;
        for ( Fruit fr : seller.getFruits() )
        {
            if( fr.name.equals(fruit) && fr.variety.equals(variety) )
            {
                if(seller.isAvailable(fr))
                {
                    newOrder.fruits.add(fr);
                    setRewards( amt * fr.pricePerKg * .01 );
                    Delivery d1 = new Delivery();
                    System.out.println(d1.calculateRoute( newOrder ));
                }

            }
        }

        this.order = newOrder ;
        return newOrder ;
    }

    void setRewards( double amount )
    {
        this.rewards = amount ;
    }

    public double getRewards()
    {
        return rewards;
    }


}
