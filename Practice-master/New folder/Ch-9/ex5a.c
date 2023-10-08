#include<stdio.h>

int main()
{
    FILE *fp1, *fp2;
    double num;
    int i;

    fp1= fopen("VALUES.txt", "wb");
    fp2= fopen("Count.txt", "wb");

    for(i=0; i<32767.0; i++)
    {
        printf("Enter number(0 to quit): ");
        scanf("%lf", &num);
        if(!num)
            break;
        fwrite(&num, sizeof num, 1, fp1);
    }
    fwrite(&i, sizeof i, 1, fp2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
