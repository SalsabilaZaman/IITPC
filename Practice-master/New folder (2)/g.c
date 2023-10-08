#include<stdio.h>
#include<string.h>

int main()
{
    int n, a[2000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i <=2000; i++){

        for(int j = 0; j < n; j++){
            
            if(a[j] == i){
                
            }
            else{
               
                printf("%d", i);
                break;

            } 
        }

    }


    return 0;
}