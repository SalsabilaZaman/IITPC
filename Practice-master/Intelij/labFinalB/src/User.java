public class User
{
    private String firstName;
    private String lastName;
    protected int phoneNumber;

    public User(String firstName, String lastName, int phoneNumber)
    {
        this.setFirstName(firstName);
        this.setLastName(lastName);
        this.phoneNumber = phoneNumber;
    }

    public int getPhoneNumber()
    {
        return phoneNumber;
    }

    public void setFirstName(String firstName)
    {
        this.firstName = firstName;
    }

    public void setLastName(String lastName)
    {
        this.lastName = lastName;
    }

    @Override
    public String toString()
    {
        return this.firstName + " " + this.lastName + " " + this.phoneNumber + "\n" ;
    }
}
