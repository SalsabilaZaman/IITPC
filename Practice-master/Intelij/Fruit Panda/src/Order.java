import java.util.ArrayList;

public class Order {
    private ArrayList<Fruit> fruitList;
    private ArrayList<Integer> quantityInKgList;
    private Buyer buyer;
    private Seller seller;

    public Order(ArrayList<Fruit> fruitList, ArrayList<Integer> quantityInKgList, Buyer buyer, Seller seller) {
        this.fruitList = fruitList;
        this.quantityInKgList = quantityInKgList;
        this.buyer = buyer;
        this.seller = seller;
    }

    public ArrayList<Fruit> getFruitList() {
        return fruitList;
    }

    public ArrayList<Integer> getQuantityInKgList() {
        return quantityInKgList;
    }

    public Buyer getBuyer() {
        return buyer;
    }
}