#include<stdio.h>

int cnt(int data, int *num);

int main()
{
    int i, data, count=0, *pntr;
    int num[]={23,5,21,13,20,28,21,10,7,13};
    pntr = num;
    printf("Enter a number : ");
    scanf("%d",&data);
    
    count=cnt( data, pntr);   

    if(count>0)printf("Found !!\n%d : %dtimes",data,count);
    else
    {
        printf("Not found.\n");
    }
}

int cnt(int data, int *num)  
{
    int count;
    for(int i=0; i<10; i++)
    {
        if(*num==data)
        {
            count = count + 1;
        }
        num++;  // *(num+i);
    }
    return count;
}