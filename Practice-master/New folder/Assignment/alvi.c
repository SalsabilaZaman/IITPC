#include<stdio.h>
#include<math.h>
#include<string.h>

#define num 2
FILE *fp;

int teacher_login(void);
int valid_mail(char *mail);
void encryption(char *arr);
void decryption(char *arr);
void data_read(void);
void marks_input(void);
void calculate_cgpa(void);
void grade_point(void);
void sort_cgpa(void);
void result_file(void);

struct student{
    char name[100];
    int roll;
    float marks[6];
    int gradepoint[6];
    float cgpa;
    struct student *ptr;
}bsse14[num],temp;

int main()
{   
    int login;
    login=teacher_login();
    if(login==0) {
        printf("Wrong email or password!");
        return 0;
    }else if(login==2){
        printf("Invalid Email!");
        return 0;
    }

    data_read();
    marks_input();
    grade_point();
    calculate_cgpa();
    sort_cgpa();
    result_file();
    
    for(int i=0;i<num;i++){
        printf("Student name:%s     ",bsse14[i].name);
        printf("Roll:%d     ",bsse14[i].roll);
        for(int j=0;j<6;j++)
        printf("Course %d marks:%.2f    ",j+1,bsse14[i].marks[j]);
        printf("%f",bsse14[i].cgpa);
        printf("\n");
    }
    

    return 0;
}

int teacher_login(void){
    int count=0;
    char correct_username[100]="sakib101@gmail.com";
    char correct_pass[100]="iit123";
    char username[100];
    char password[100];

    fp= fopen("labfinalt.txt","w");
    encryption(correct_pass);
    fprintf(fp,"%s ",correct_username);
    fprintf(fp,"%s ",correct_pass);
    fclose(fp);

    printf("         Teacher's Dashboard       \n");
    printf("Enter Username:");
    scanf("%s",username);
    printf("Enter Password:");
    scanf("%s",password);
    int check=valid_mail(username);
    fp = fopen("labfinalt.txt","r");
    fscanf(fp,"%s",correct_username);
    fscanf(fp,"%s",correct_pass);
    decryption(correct_pass);
    if(check){
        if(!strcmp(username,correct_username) && !strcmp(password,correct_pass)){
            printf("Log in successful!");
            return 1;
        }else return 0;
    }else return 2;

}

int valid_mail(char *mail){
  int index, flag=0,flagp=0;
    for(int i=0;mail[i]!='\0'; i++ ){
        if(mail[i]=='@'){
            index = i;
            flag=1;
        }
    }
    if(flag)if(mail[index+1]=='g' && mail[index+2] == 'm'&& mail[index+3] == 'a'&& mail[index+4] == 'i'&& mail[index+5] == 'l'&& mail[index+6] == '.'&& mail[index+7] == 'c'&& mail[index+8] == 'o'&& mail[index+9] == 'm') flagp =1;
    return flagp;
    
}

void encryption(char *arr){
    for(int i=0;arr[i]!='\0';i++) arr[i] += 3;
}

void decryption(char *arr){
    for(int i=0;arr[i]!='\0';i++) arr[i] -=3;
}

void data_read(void){
    fp=fopen("labfinal.txt","r");
    for(int i=0;i<num;i++){
        fscanf(fp,"%s",bsse14[i].name);
        fscanf(fp,"%d",&bsse14[i].roll);
    }
    fclose(fp);
}

void marks_input(void){
    for(int i=0;i<num;i++){
        printf("Student name:%s\n",bsse14[i].name);
        printf("Roll:%d\n",bsse14[i].roll);
        for(int j=0;j<6;j++){
            printf("Course %d marks:",j+1);
            scanf("%f",&bsse14[i].marks[j]);
        }
    }

}

void grade_point(void){
    for(int i=0;i<num;i++){
        for(int j=0;j<6;j++){
             if(bsse14[i].marks[j]>=0 && bsse14[i].marks[j]<=40) bsse14[i].gradepoint[j]=1;
             else if(bsse14[i].marks[j]>40 && bsse14[i].marks[j]<=60) bsse14[i].gradepoint[j]=2;
             else if(bsse14[i].marks[j]>60 && bsse14[i].marks[j]<=80) bsse14[i].gradepoint[j]=3;
             else if(bsse14[i].marks[j]>80 && bsse14[i].marks[j]<=100 ) bsse14[i].gradepoint[j]=4;
        }
    }
}

void calculate_cgpa(void){
    float sum;
    for(int i=0;i<num;i++){
        sum=0.0;
        for(int j=0;j<6;j++){
           sum=sum+bsse14[i].gradepoint[j];
        }
        bsse14[i].cgpa=sum/6.00;
    }

}

void sort_cgpa(void){
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(bsse14[i].cgpa<bsse14[j].cgpa){
                strcpy(temp.name,bsse14[j].name);
                strcpy(bsse14[j].name,bsse14[i].name);
                strcpy(bsse14[i].name,temp.name);
                temp.roll=bsse14[j].roll;
                bsse14[j].roll=bsse14[i].roll;
                bsse14[i].roll=temp.roll;
                temp.cgpa=bsse14[j].cgpa;
                bsse14[j].cgpa=bsse14[i].cgpa;
                bsse14[i].cgpa=temp.cgpa;
                    for(int k=0;k<6;k++){
                        temp.marks[k]=bsse14[j].marks[k];
                        bsse14[j].marks[k]=bsse14[i].marks[k];
                        bsse14[i].marks[k]=temp.marks[k];
                    }
            }
        }
    }

}

void result_file(void){
    fp=fopen("labfinalout.txt","w");
    for(int i=0;i<num;i++){
        fprintf(fp,"%s\t",bsse14[i].name);
        fprintf(fp,"%d\t",bsse14[i].roll);
        for(int j=0;j<6;j++){
            fprintf(fp,"%.2f\t",bsse14[i].marks[j]);
        }
        fprintf(fp,"%.2f\n",bsse14[i].cgpa);
    }
    fclose(fp);
}
