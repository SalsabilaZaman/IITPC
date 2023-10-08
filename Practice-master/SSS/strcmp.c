#include<stdio.h>

int my_strcmp(char s1[], char s2[]);

int main()
{  
    char str1[20], str2[20];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);
    int x=  my_strcmp(str1, str2) ;
    printf("%d\n",x);
    if (x) printf("The strings do not match.\n");
    else printf("Matched.\n");
}

int my_strcmp(char s1[], char s2[])
{
    int i, l1, l2;
    for(i=0; s1[i]; i++);
    l1 = i;
    for(i=0; s2[i]; i++);
    l2= i;
    if (l1 < l2) return -1;
    else if (l2 > l1) return 1;
    else if (l1 == l2)
    {
        for (i=0; i<l1; i++)
        {
            if (s1[i] == s2[i]) continue;
            else break;
        }
        if (i== l1) return 0;
        else return -2;
    }
}
