#include<stdio.h>
#include<math.h>

int push(int queue[], int i, int son)
{
    queue[i] = son;
}

int pop(int queue[], int i)
{
    printf("%d\t",queue[i]);
    if (i%2==0) printf("  ");
    else printf("\t");
    
}

int main()
{
    int queue[7] ;
    int k=0;

    for (int i = 0; i < 3; i++)
    {
        int s = (int)pow(2,i);
        for(int j=0; j<s; j++)
        {
            int son;
            scanf("%d",&son);
            push(queue, k, son);
            k++;
        }
    }
    
    
    k=0;

    for(int i=0; i<3; i++)
    {
        for (int l = 0; l < 2-i; l++)
        {
            printf("\t");
        }
        
        int s = (int)pow(2,i);
        for(int j=0; j<s; j++)
        {
            pop(queue, k);
            k++;
        }
        printf("\n");
    }

}