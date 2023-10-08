public class UsingException
{
    public static void main(String[] args)
    {
        try
        {
            throwException();
        }
        catch ( Exception exception )
        {
            //System.err.println("Exception handled in main");
            System.out.println("Exception handled in main");
        }
        doesNotThrowException();
    }

    public static void throwException () throws Exception
    {
        try
        {
            System.out.println("Method throwException ");
            throw new Exception();
        }
        catch ( Exception exception )
        {
            //System.err.println("Exception handled in method throwException.");
            System.out.println("Exception handled in method throwException.");
            throw exception ;
        }
        finally
        {
//            System.err.println("Finally executed in throwException.");
            System.out.println("Finally executed in throwException.");
        }
    }

    public static void doesNotThrowException()
    {
        try
        {
            System.out.println("Method doesNotthrowException ");
        }
        catch ( Exception exception )
        {
//            System.err.println( exception ) ;
            System.out.println( exception ) ;
        }
        finally
        {
//            System.err.println("Finally executed in doesNotthrowException.");
            System.out.println("Finally executed in doesNotthrowException.");
        }
        System.out.println("End of method doesNotthrowException. ");
    }

}
