public class Fruit {
    private String name;
    private String variety;
    private int totalQuantityKg;
    private int pricePerKg;

    public Fruit(String name, String variety, int totalQuantityKg, int pricePerKg) {
        this.name = name;
        this.variety = variety;
        this.totalQuantityKg = totalQuantityKg;
        this.pricePerKg = pricePerKg;
    }

    public String getName()
    {
        return name;
    }
    public void setTotalQuantityKg(int quantity) {
        this.totalQuantityKg -= quantity;
    }

    public int getPricePerKg() {
        return pricePerKg;
    }

    @Override
    public String toString() {
        return "Fruit{" +
                "name='" + name + '\'' +
                ", variety='" + variety + '\'' +
                ", totalQuantityKg=" + totalQuantityKg +
                ", pricePerKg=" + pricePerKg +
                '}';
    }
}
