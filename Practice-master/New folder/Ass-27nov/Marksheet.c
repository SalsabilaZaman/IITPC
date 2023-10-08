#include<stdio.h>

int main()
{
    int grade_calc(int marks);
    float cg_print(int gpa, int course);
    int  f1, f2, f3;
    int batch, stu, course, marks, grade, t_grade;
    printf("Enter Number of batch, student in each Batch and Courses :\n");
    scanf("%d%d%d",&batch,&stu,&course);

    int student[batch][stu][course];
    int grd[batch][stu][course];
    char name[batch][stu][30];
    

    for(f1=0 ; f1<batch ; f1++)
    {
        for(f2=0 ; f2<stu ; f2++)
        {
            printf("Enter the Name of batch:%d, roll:%d is: ",f1+1,f2+1);
            scanf("%s",name[f1][f2]);
            for(f3=0 ; f3<course ; f3++)
            {
                for( ; ; )
                {
                    printf("Enter num in course:%d of batch:%d, roll:%d is: ",f3+1,f1+1,f2+1);
                    scanf("%d",&marks);
                    if(marks>=0 && marks<=100)
                    {
                        student[f1][f2][f3] = marks;
                        grade=grade_calc(marks);
                        break;
                    }
                    printf("Wrong input. Enter again.\n");
                }
                grd[f1][f2][f3] = grade;                                                                                                                                                                                                                                                                                                                        
            }
        }
    }
    
    for(int f1=0 ; f1<batch ; f1++)
    { 
        for(int f2=0 ; f2<stu ; f2++)
        {
            int t_grade = 0;
            for(int f3=0; f3<course; f3++)
            {
                printf("Name - %s :\n",name[f1][f2]);
                printf("Batch - %d .\n",f1+1);
                printf("Course - %d:  Marks=%d, Grade=%d.\n",f3+1,student[f1][f2][f3],grd[f1][f2][f3]); 
                t_grade = t_grade + grd[f1][f2][f3];
            }
            cg_print(t_grade,course);
        }
    } 
    
    return 0;
}

int grade_calc(int marks)
{
    int grade;
    if(marks>=0 && marks<=40)grade=1;
    else if(marks>40 && marks<=60)grade=2;
    else if(marks>60 && marks<=80)grade=3;
    else if(marks>80 && marks<=100)grade=4;
    return grade;
}

float cg_print(int gpa, int course)
{
    printf("CGPA : %.2f\n",(float)gpa/course);
}