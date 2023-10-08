#include<bits/stdc++.h>
using namespace std ;

int main()
{
    char c1 , str[100] ;
    int lineCount = 1, indx = 0  ;

    FILE *fp ;
    fp = fopen("test.c", "r");
    while ( !feof(fp) )
    {
        c1 = fgetc(fp) ;
        
        if ( c1 == '\n')
        {
            lineCount ++ ;
        }

        if( c1 == '/' )
        {

            c1 = fgetc(fp) ;
            if( c1 == '/' )
            {
                indx = 0 ;
                while ( c1 != '\n' )
                {
                    c1 = fgetc(fp) ;
                    str[indx++] = c1 ;
                }
                
                cout << "Comment at line - " << lineCount << " : ";
                for ( int i = 0; i < indx; i++ )
                {
                    cout << str[i] ;
                }
                
                lineCount ++ ;
            }
            else if( c1 == '*')
            {
                indx = 0 ;
                c1 = fgetc(fp) ;

                while ( c1 != '*' )
                { 
                    str[indx++] = c1 ;
                    c1 = fgetc(fp) ;
                    if ( c1 == '\n')
                    {
                        lineCount ++ ;
                    }

                    if ( c1 == EOF )
                    {
                        cout << "Not commented perfectly." << endl ;
                        break ;
                    }
                    
                }
                cout << "Multilinear Comment  : "  ;
                for ( int i = 0; i < indx; i++ )
                {
                    cout << str[i] ;
                } cout << endl ;
                
            }
        }
        
    }
    
    fclose(fp) ;
}