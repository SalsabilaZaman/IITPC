import java.util.*;

public class Seller extends User
{
    private String address ;
    private ArrayList<Fruit> fruits ;

    public Seller(String firstName, String lastName, int phoneNumber, String address, ArrayList<Fruit> fruits )
    {
        super(firstName, lastName, phoneNumber);
        this.address = address ;
        this.fruits = fruits ;
    }

    void showList()
    {
        for ( Fruit fr : fruits )
        {
            System.out.println( fr.name + " " + fr.variety + " : " + fr.pricePerKg );
        }
    }

    boolean isAvailable( Fruit fruit )
    {
        boolean ok = false ;
        for ( Fruit fr : this.fruits )
        {
            if( fruit==fr && fr.totalQuantityKg > 0 ) return true;
        }
        if ( !ok ) System.out.println("Not Available.");
        return ok ;
    }

    public ArrayList<Fruit> getFruits()
    {
        return fruits;
    }

    public String getAddress()
    {
        return this.address;
    }

    @Override
    public String toString()
    {
        return super.toString();
    }
}
