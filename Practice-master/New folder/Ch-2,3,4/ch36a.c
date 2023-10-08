#include<stdio.h>
int main()
{
     int num, i;
    for(num=2; num<1000; num++)
    { 
        i=2;
        while (i<num/2)
        {
            if(num%i==0) break;
            i++;
        }

        if(i>=num/2) 
            {
                printf("%d\n",num); 
            }
    
    }
    return 0;
}