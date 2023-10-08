#include<stdio.h>

double soundspeed(double s);

int main()
{
    double dis, time;
    printf("Enter the distance(in feet) : ");
    scanf("%lf",&dis);
    time= soundspeed(dis);               //time = dis/1129;

    printf("Time needed for sound : %.2lf sec\n", time);

    return 0;
}

double soundspeed(double s)
{
    int speed = 1129;
    return s/speed;
}