#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;
    char c;
    do
    {
        if(i==0) printf("Mailing list menu.\n");
        if(i==1) printf("1.Enter Addresses.\n");
        if(i==2) printf("2.Delete Addresses.\n");
        if(i==3) printf("3.Search the list.\n");
        if(i==4) printf("4.Print the list.\n");
        if(i==5) printf("5.Quit.\n");
        printf("If ok, press Y.\n");
        c=getche();
        printf("\n");
        if(c=='Y')i++;
        
    } while (i<=5);
    
    return 0;
}