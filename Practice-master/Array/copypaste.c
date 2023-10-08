#include<stdio.h>
 
int main()
{
	int i,j;

	char arr1[50];
	printf("Enter a string : ");
	gets(arr1);

	char arr2[50];

	for(i=0 ;i<20 ;i++)
	{
		arr2[i] = arr1[i];
	}

	printf("%s\n",arr1);
	printf("%s\n",arr2);

	return 0;
}