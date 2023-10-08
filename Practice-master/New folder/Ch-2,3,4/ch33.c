#include<stdio.h>
int main()
{
    float dis, avg_sp;
    printf("Enter distance(meter) : ");
    scanf("%f",&dis);
    printf("Enter average speed(meter/sec) : ");
    scanf("%f",&avg_sp);
    printf("Driving time : %.2fsec\n",dis/avg_sp);
    for(int i=1; i<dis/avg_sp; i++)
    {
        printf("After %dsec, travelled %.2fmeter\n",i,i*avg_sp);
    }
    return 0;
}