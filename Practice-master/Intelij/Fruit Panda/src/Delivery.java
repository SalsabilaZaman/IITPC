public class Delivery implements RoutePlanner{
    private RoutePlanner routePlanner;
    public void deliver(Order order){
        double totalSpent = 0;
        for(int i = 0; i < order.getFruitList().size(); i++){
            System.out.println((i+1)+".PricePerKg: "+order.getFruitList().get(i).getPricePerKg());
            System.out.println((i+1) +".Quantity: " +order.getQuantityInKgList().get(i));
            totalSpent += ( order.getFruitList().get(i).getPricePerKg() * order.getQuantityInKgList().get(i) );
        }
        System.out.println("Total Spent by: " + order.getBuyer() +" is: " +totalSpent);
        order.getBuyer().setRewards(0.01*totalSpent);
    }
    @Override
    public String calculateRoute(String from, String to) {
        return String.format("Delivery From: %s To: %s", from, to);
    }
}
