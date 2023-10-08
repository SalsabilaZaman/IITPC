#include<stdio.h>
#include<string.h>
#define n 2 
#define c 3

int email_valid(char *mail);
void encrypt (char *p);
void decrypt (char *q);
void teacher_sign_in(void);
int teacher_login(void);
int gpa(int m);
float cgpa_calc(int arr[]);
void sorting(void);

struct course{
    char email[50];
    char password[10];
} teacher; 

struct student{
    char name[80];
    int roll;
    int course_marks[c]; // c=6
    int gpa[c];
    float cgpa;
} bsse14[n], temp; // n=52

int main()
{
    // teacher sign in process
    // teacher_sign_in();
    
    // teacher login process
    if (teacher_login())
    {
        FILE *sp= fopen("student.txt", "r");

        int i= 0;
        while(!feof(sp))
        {
            fscanf(sp,"%s", bsse14[i].name);
            fscanf(sp, "%d", &bsse14[i].roll);
            i++;
        }

        fclose(sp);

        for(i=0; i<n; i++)
        {
            printf("Enter the marks of student %d: ", bsse14[i].roll);
            
            for (int j=0; j<c; j++)
            {
                printf("For course-%d-\n", j+1);
                scanf("%d", &bsse14[i].course_marks[j]);
                bsse14[i].gpa[j]= gpa(bsse14[i].course_marks[j]);
            }
           bsse14[i].cgpa = cgpa_calc(bsse14[i].gpa);
    
        }

        sorting();

        FILE *op = fopen("output.txt", "w");
        fprintf(op, "Merit list\n");
    
        for(i=0; i<n; i++)
        {
            fprintf(op, "%d. %s %d %f\n", i+1, bsse14[i].name, bsse14[i].roll, bsse14[i].cgpa);
        }

        fclose(op);
        return 0;
    }

    else return 0;
}

void teacher_sign_in(void)
{
    char str_email[50], str_password[10];

    for (int i=0; i<3; i++)
    {
        printf("Enter your email address: ");
        gets(str_email);
        if (email_valid(str_email))
        {
            printf("Enter password: ");
            gets(str_password);
            // strcpy(teacher.email, str_email);
            // strcpy(teacher.password, str_password);
            break;
        }
        else continue;
    }

    FILE *fp = fopen("input.txt", "w");
    encrypt(str_password);
    fprintf(fp, "%s %s", str_email, str_password);
    fclose(fp);
}

int email_valid(char *mail)
{
    int l= strlen(mail);
    int i, j, k; char temp[12];

    for (i=0; mail[i]!= '\0'; i++)
    {
        if (mail[i] == '@')
        {
            k=0;
            for(j=i+1; mail[j] != '\0'; j++)
            {
                temp[k]= mail[j];
                k++;
            }
            temp[k] = '\0';
            if (!strcmp(temp, "gmail.com")) return 1;
            else return 0;
        }
    }
    if (i== l) return 0;
}

void encrypt (char *p)
{
    while (*p)
    {
        *p = *p+2;
        p++;
    }
}

void decrypt(char *q)
{
    while (*q)
    {
        *q = *q-2;
        q++;
    }
}

int teacher_login(void)
{
    char email[50], password[10]; 
    FILE *fp= fopen("input.txt", "r");
    fscanf(fp, "%s", teacher.email);
    fscanf(fp, "%s", teacher.password);

    decrypt (teacher.password);

    printf("Email address: ");
    scanf("%s", email);
    printf("Password: ");
    scanf("%s", password);

    if (!strcmp(email, teacher.email) && !strcmp(password, teacher.password))
    {
        printf("Login Successful!\n");
        return 1;
    }
    else 
    {
        printf("Wrong email address or password.\n");
        return 0;
    }
}

int gpa(int m)
{
    if(80<= m && m <= 100)
    return 4;

    else if(60<= m && m < 80)
    return 3;
    
    else if (40<= m && m < 60)
    return 2;

    else return 1;
}

float cgpa_calc(int arr[])
{
    float sum=0;
    for (int i=0; i<c; i++)
    {
        sum = sum+ arr[i];
    }
   float cgpa = sum/c;
   return cgpa;
}

void sorting(void)
{
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(bsse14[j].cgpa< bsse14[j+1].cgpa)
            {
                temp = bsse14[j];
                bsse14[j] = bsse14[j+1];
                bsse14[j+1] = temp;
            }
        }
    }
}
