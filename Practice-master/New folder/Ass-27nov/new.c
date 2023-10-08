#include<stdio.h>
#include<conio.h>
//B U Z Z becomes C V A A

int main(){
    //Checking how it works!
    
    //char letter;
    //letter='B';
    //printf("%c",letter+1);

    char letter[4]={"BUZZ"};
    for(int i=0; i<4; i++)
    {
        if(letter[i]!='Z')
        {
            printf("%c",letter[i]+1);
        }

        if(letter[i]=='Z')
        {
            printf("A");
        }

    }

   /* *//*//Use Character type loop variable 
    char alphabet;

    for(alphabet=getche();alphabet<='z';alphabet=getche()){
        if(alphabet!='z'){
            printf("%c",alphabet+1);
        }
        
        if(alphabet=='z'){
            printf("%c",'a');

        }

    }*/

    return 0;
}