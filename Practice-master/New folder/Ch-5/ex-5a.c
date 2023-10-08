#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int j,c=0;
    char i[10];
    char arr[10][2][30]={"0","Zero","1","One","2","Two","3","Three","4","Four","5","Five","6","Six","7","Seven","8","Eight","9","Nine"};

    printf("Enter the Number:");
    gets(i);
    
    for( j=0; j<10; j++ )
    {
        if(!strcmp(i,arr[j][0]))
        {
            printf("%d-->%s .\n",j,arr[j][1]);
            c=1;
            break;
        }
    }

    if(c==0)printf("Improper input.\n");  

    return 0;
}