import java.io.File;
import java.util.Scanner;

public class FileDemonstration
{
    public void analyzePath( String path )
    {
        File name = new File( path );

        if ( name.exists() )
        {
            System.out.printf("%s %s\n%s\n%s\n%s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n",
                    name.getName(),"exists",(name.isFile()?"is a file":"isn't a file"),
                    (name.isDirectory()? "is a directory" : "isn't a directory"),
                    (name.isAbsolute()? "is absolute path" : "isn't absolute path"),
                    "Last modified :", name.lastModified(),"Length : ", name.length(),
                    "Path : ", name.getPath(), "Absolute path : ", name.getAbsolutePath(),
                    "Parent : ", name.getParent() );
            if ( name.isDirectory() )
            {
                String directory[] = name.list() ;
                System.out.println("\n\nDirectory contents:\n");
                for ( String dirName : directory )
                {
                    System.out.println(dirName);
                }
            }
        }
        else
        {
            System.out.printf("%s %s", path, "doesn't exist.");
        }
    }

    public static void main(String[] args)
    {
        Scanner input = new Scanner( System.in ) ;
        FileDemonstration applicaltion = new FileDemonstration() ;
        System.out.print("Enter file or directory name here : " );
        applicaltion.analyzePath( input.nextLine() );
    }
}
