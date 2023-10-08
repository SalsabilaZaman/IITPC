#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    long i;
    int num;

    fp= fopen("rand", "rb");

    printf("Enter number(0-99): ");
    scanf("%ld", &i);
    fseek(fp, i*sizeof(int), SEEK_SET);
    fread(&num, sizeof num, 1, fp);
    printf("%d", num);

    fclose(fp);
    return 0;
}
