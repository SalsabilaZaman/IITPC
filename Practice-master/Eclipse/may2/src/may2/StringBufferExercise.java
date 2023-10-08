package may2;

public class StringBufferExercise 
{
	public static void main(String[] args) 
	{
		StringBuffer stringBuffer = new StringBuffer("The quick brown foxjumps over the lazy dog.");
		stringBuffer.append(" And so does the quick grey fox.");
		stringBuffer.insert(4, "lazy ");
		stringBuffer.delete(30, 34);
		String result = stringBuffer.toString();
		System.out.println(result);
	}

}
