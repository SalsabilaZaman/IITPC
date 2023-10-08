import java.util.ArrayList;
import java.util.Scanner;

public class Buyer extends User{
    private String address;
    private double rewards;
    private Order order;

    public Buyer(String firstName, String lastName, String phoneNumber, String address/*Order order,Seller seller*/) {
        super(firstName, lastName, phoneNumber);
        this.address = address;
        this.setRewards(0.0);
        //this.order = placeOrder(seller);
    }

    public void setRewards(double rewards) {
        this.rewards += rewards;
    }

    public double getRewards() {
        return rewards;
    }

    public Order placeOrder(Seller seller){
        seller.displayFruits();
        Scanner sc = new Scanner(System.in);
        ArrayList<Fruit> fruitList = new ArrayList<>();
        ArrayList<Integer> quantityInKgList = new ArrayList<>();
        while(true)
        {
            String name;
            int quantity;
            int choice;
            System.out.println("Enter the name of the fruit from the list");
            name = sc.next();

            for(Fruit x : seller.getFruitList())
                if(x.getName().equals(name))
                    fruitList.add(x);

            System.out.println("Enter quantity:");
            quantity = sc.nextInt();

            quantityInKgList.add(quantity);

            for(Fruit x : seller.getFruitList())
                if(x.getName().equals(name))
                    x.setTotalQuantityKg(quantity);
            System.out.println("Do you want to continue? (press 1 for Continue, 0 for break)");
            choice = sc.nextInt();
            if( choice == 0 ) break;
        }
        this.order = new Order(fruitList, quantityInKgList,this, seller);
        return order;
    }

    @Override
    public String toString() {
        return "Buyer{" +
                "address='" + address + '\''+
                "} " + super.toString();
    }
}
