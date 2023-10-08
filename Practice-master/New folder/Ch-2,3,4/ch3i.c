#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("What do you want? \nAddition, Substitution, Multiplication, Division??\nEnter the first letter: ");
    ch=getchar();
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    if(ch=='A') printf("%d",a+b);
    else if(ch=='S') printf("%d",a-b);
    else if(ch=='M') printf("%d",a*b);
    else if(ch=='D'&& b!=0) printf("%.2f",(float)a/b);
   
    
    return 0;
}