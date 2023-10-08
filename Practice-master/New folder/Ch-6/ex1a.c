#include<stdio.h>

int main()
{
    int i[10]={0,1,2,3,4,5,6,7,8,9};
    int *j;
    j=i;

    for(  ; *j<10 ; )
    {
        printf("%d\n",*j);
        j++;
    }

    return 0;
} 

/*int main()
{
    int i=0;
    int *j;
    j=&i;

    for(  ; *j<10 ; )
    {
        printf("%d\n",*j);
        i++;
    }

    return 0;
} */