public class Delivery implements RoutePlanner
{
    @Override
    public String calculateRoute(Order order)
    {
        return "Go from " + order.seller.getAddress() + " to " + order.buyer.address ;
    }
}
