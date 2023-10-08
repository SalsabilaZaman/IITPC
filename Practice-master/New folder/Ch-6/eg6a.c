#include<stdio.h>

int main()
{
    float *fp, **mfp, val;
    char *p, **mp, str[80];
    fp = &val;
    mfp = &fp;
    **mfp = 245.345;
    p = str;
    mp = &p;

    printf("Enter your Name: ");
    gets(*mp);
    printf("Hi %s.\n",str);
    printf("%f %f",val,**mfp);

    return 0;
} 