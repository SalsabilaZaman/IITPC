import java.util.ArrayList;

public class Shop
{
    private ArrayList<Items> items = new ArrayList<>();

    public Shop(ArrayList<Items> items)
    {
        this.items = items;
    }

    public ArrayList<Items> getItems()
    {
        return items;
    }

    void showList()
    {
        for ( Items it : items )
        {
            System.out.println( it.getName() + ": Available - " + it.getQuantity() + " Per piece - " + it.getUnitPrice() );
        }
    }

}
