#include<stdio.h>
int main()
{
    int ans, count;
    for(count=1; count<11; count++)
    {
        printf("%d + %d = ",count,count);
        scanf("%d",&ans);
        if(count+count==ans) printf("Your Ans is Correct.\n");
        else printf("Your Answer is Incorrect.\n");
    }
    
    return 0;
}