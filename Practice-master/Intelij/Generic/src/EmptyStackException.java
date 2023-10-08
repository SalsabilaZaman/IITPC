public class EmptyStackException extends RuntimeException
{
    public EmptyStackException()
    {
        this( "Stack is Empty" );
    }

    public EmptyStackException( String exception )
    {
        super( exception );
    }
}
