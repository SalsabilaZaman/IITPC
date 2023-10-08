#include<stdio.h>
int main()
{
    int ans;
    printf("138+271 = ");
    scanf("%d",&ans);

    if(ans==409) 
    {
        printf("Your Answer is Correct");
    }
    else 
    {
        printf("Your Answer is Wrong.\n");
        printf("Correct Answer is %d.",138+271);
    }
    return 0;
}