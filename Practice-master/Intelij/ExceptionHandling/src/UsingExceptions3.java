public class UsingExceptions3
{
    public static void main(String[] args)
    {
        try
        {
            method1() ;
        }
        catch( Exception exception )
        {
            System.err.printf("%s\n\n", exception.getMessage()) ;
            exception.printStackTrace();

            StackTraceElement[] traceElements = exception.getStackTrace() ;

            System.out.println("\nStack trace from getStackTrace: Class\t\tFile\t\tMethod");

            for ( StackTraceElement element : traceElements )
            {
                System.out.printf("%s\t%s\t%s\t%s\n", element.getClassName(), element.getFileName(), element.getLineNumber(), element.getMethodName() );
            }

        }
    }

    public static void method1() throws Exception
    {
        method2();
    }
    public static void method2() throws Exception
    {
        method3();
    }
    public static void method3() throws Exception
    {
        throw new Exception( "Exception thrown in method3.") ;
    }

}
