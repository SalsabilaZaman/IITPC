#include<stdio.h>
#include<math.h>

int push(int tree, int queue[], int i, int top)
{
    queue[i] = top;
}

int pop(int queue[], int i)
{
    printf("%d\t",queue[i]);
    if (i%2==0) printf("  ");
    else printf("\t");
    
}

int main()
{
    int tree[] = {1,2,3,4,5,6,7};
    int queue[7] ;
    int k=0;
    int top=0;
    for (int i = 0; i < 3; i++)
    {
        int s = (int)pow(2,i);
        for(int j=0; j<s; j++)
        {
            //scanf("%d",&top);
            push(tree, queue, k, top);
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