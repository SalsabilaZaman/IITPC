import java.util.ArrayList;

public class Main
{
    public static void main(String[] args)
    {
        //seller part
        Fruit f1 = new Fruit("Mango", "Hiamsagor", 20, 50);
        Fruit f2 = new Fruit("Mango", "Langra", 20, 60);
        Fruit f3 = new Fruit("Banana", "Sagor", 30, 30);
        Fruit f4 = new Fruit("Banana", "Sobri", 20, 35);
        Fruit f5 = new Fruit("Mango", "Fazli", 20, 70);

        ArrayList<Fruit> forSeller = new ArrayList<>();
        forSeller.add(f1);
        forSeller.add(f2);
        forSeller.add(f3);
        forSeller.add(f4);
        forSeller.add(f5);

        Seller s1 = new Seller("Korim", "mia", 818283 , "Arambagh", forSeller);

        //buyer part

        Buyer b1 = new Buyer("Shah", "Alam", 818384, "Hatirjheel");
        Order order1 = b1.placeOrder(s1) ;

        System.out.println("Buyer 1 got reward : " + b1.getRewards());
    }
}