#include<stdio.h>
#include<conio.h>
int main()
{
    char letter;
    printf("Enter a letter : ");
    letter=getche();
    printf("\n");

    switch(letter)
    {   
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        {
             printf("The letter is vowel.\n");
             break;
        }
        
        default :
        {
            printf("The letter is consonant.\n"); 
            break;
        }   
    }

    return 0;
}