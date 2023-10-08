import java.util.ArrayList;

public class Seller extends User{
    private String address;
    private ArrayList<Fruit> fruitList;

    public Seller(String firstName, String lastName, String phoneNumber, String address, ArrayList<Fruit> fruitList) {
        super(firstName, lastName, phoneNumber);
        this.address = address;
        this.fruitList = fruitList;
    }

    public ArrayList<Fruit> getFruitList() {
        return fruitList;
    }

    public void displayFruits(){
        for(Fruit x : fruitList) System.out.println(x);
    }
}
