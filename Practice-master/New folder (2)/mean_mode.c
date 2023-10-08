#include<stdio.h>
#include<math.h>

int main(void)
{
    int marks[4][52][3];
    int total[4][52]; 
    char name[4][52][50];
    int batch, student, course, i, j;
    float n=0; int mode, freq1=0, freq2=0; 
    float mean, var, dev, a, b, c;// a, b, c are calculation variables

    printf("Enter the marks:\n");

    for (batch=0; batch<4; batch++)
    {
        printf("Batch -%d\n", batch+1);
        for (student=0; student<52; student++)
        {
            int sum = 0;
            printf("Student -%d\n", student+1);
            printf("Enter name:\n");
            scanf("%s", name[batch][student]);
            for (course=0; course<3; course++)
            {
                printf("Course -%d: ", course+1);
                scanf("%d", & marks[batch][student][course]);
                sum = sum + marks[batch][student][course];
            }
            total[batch][student] = sum;

        }
    }

    float sum = 0;
    for (batch=0; batch<4; batch++)
    {
        for (student=0; student<52; student++)
        {
            sum= sum + total[batch][student];
            n= n+1;

        }
    }
    
    mean = sum/n;
    printf("The mean is %f\n", mean);

    sum = 0;
    for (batch=0; batch<4; batch++)
    {
        for (student=0; student<52; student++)
        {
            a= mean- total[batch][student];
            b= a*a;
            sum = sum+ b;
        }
    }
    var = sum /(n-1);
    dev = sqrt(var);
    printf("The standard deviation is %f\n", dev);

    c= mean- dev;
    
    for (batch=0; batch<4; batch++)
    {
        for (student=0; student<52; student++)
        {
            if (total[batch][student] < c)
            {
                printf("WARNING LETTER:\nDear sir/ ma'am,\nYour son/ daughter %s has recieved below average marks (a total of %d for 3 courses) in the examination.\n", name[batch][student], total[batch][student]);
            }
        }
    }

    for (batch=0; batch<4; batch++)
    {
        for (student=0; student<52; student++)
        {
            freq1 = 0;
            for (i=0; i<4; i++)
            {
                for (j=0; j<52; j++)
                {
                    if (total[batch][student] == total[i][j])
                    {
                        freq1++;
                    }
                }

            }
            if (freq1> freq2)
            {
                freq2= freq1;
                mode= total[batch][student];
            }
        }
    }

    if (freq2 == 1)
    {
        printf("There is no mode.\n");
    }
    else 
    {
        printf("The mode is %d\n", mode);
    }

    return 0;
}