#include<stdio.h>
#include<stdlib.h>
#define size 50
#define number 5

char str[number][size];

void generate_string( int num );

int length_count( char *str );

int isInAlphabet( char *str );

char* concatingString( char str1[], char str2[] );

int main()
{
    for (int i = 0; i < number; i++)
    {
        generate_string(i);
        printf("String-%d : %s \n", i+1, str[i] );
        printf("length : %d \n", length_count(str[i]) );
    }

    char check[size] ;
    printf("Enter the checking string :");
    gets(check);
    if ( isInAlphabet( check ) )
    {
        printf("Check is from alphabet.\n");
    }
    else printf("Check1 is not from alphabet.\n");
   
    char str1[size], str2[size];
    printf("Enter string-01 :");
    gets(str1);
    printf("Enter string-02 :");
    gets(str2);
    //printf("%s", concatingString( str1, str2 ));

    int i = 0, c = 0 ;
    char newStr[101];
    while ( i < length_count(str1) )
    {
        newStr[c] = str1[i] ;
        //printf("%c",newStr[c]);
        i++; 
        c++ ;
    }
    i = 0;
    while (  i < length_count(str2)  )
    {
        newStr[c] = str2[i] ;
        i++ ;  
        c++ ;
    }
    newStr[c] = '\0';
    printf("%s", newStr);

    
    
}

void generate_string( int num )
{
    int length = rand() % size;
    printf("%d\n", length);
    for (int i = 0; i < length; i++)
    {
        str[num][i] = '0' + rand() % 2 ;
        //printf("%c",str[num][i]);
    }
    
}

int length_count( char *str )
{
    int length = 0 ;
    while ( str[length] != '\0' )
    {
        length ++ ;
    }
    return length ;
}

int isInAlphabet( char *string )
{
    for ( int i = 0; string[i] != '\0'; i++ )
    {
        if ( string[i]!='0' && string[i]!='1' )
        {
            return 0;
        }
    }
    return 1;
}

char* concatingString( char str1[], char str2[] )
{
    int i = 0, c = 0 ;
    char *newStr;
    printf("da ");
    printf("%d ",length_count(str1));

    while ( i < length_count(str1) )
    {
        newStr[c] = str1[i] ;
        printf("%c",newStr[c]);
        i++; 
        c++ ;
        
    }
    
    i = 0;

    while (  i < length_count(str2)  )
    {
        newStr[c] = str2[i] ;
        i++ ;  
        c++ ;
    }

    newStr[c] = '\0';
    
    return newStr; 
}