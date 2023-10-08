#include<stdio.h>
#include<string.h>

void no_vowel(char *arr1,char *arr2);

int main()
{
    int i, j, temp;
    char arr[100],cng[100];
    printf("Enter the String: ");
    gets(arr);
    no_vowel(arr,cng);
    printf(cng);

    return 0;
}

void no_vowel(char *arr1, char *arr2)
{
   int i, j=0;
   for( i=0; i<strlen(arr1); i++ )
    {
        if(arr1[i]!='a' && arr1[i]!='e' && arr1[i]!='i' && arr1[i]!='o' && arr1[i]!='u')
        {
            arr2[j] = arr1[i];
            j++;
        }
    } 
    arr2[j]='\0';
}