#include<stdio.h>
#include<string.h>
float cgpa[1000];
int n_student=0;
struct studentdata{
    char name[100];
    int roll;
    float cgpa;
    struct studentdata *ptr;
}bsse14[1000];
void signup();
void signin();
void encryption(char *p,char *q);
void decryption(char *p,char *q);
void dataentry();
void result();
void studentsignup();
void studentlogin();
int main(){
    int choice;
    printf("1.Teacher\n2.Student\n");
    printf("Are you a? ");
    scanf("%d",&choice);
    if(choice==1){
        printf("1.Sign-in\n2.Sign-up\n");
        printf("What do you want? ");
        scanf("%d",&choice);
        getchar();
        if(choice==1){
            signin();
        }
        else if(choice==2){
            signup();
        }
    }
    else if(choice==2){
        printf("1.Login\n2.Sign-up\n");
        printf("What do you want? ");
        scanf("%d",&choice);
        getchar();
        if(choice==1){
            dataentry();
            studentlogin();
        }
        else if(choice==2){
            studentsignup();
        }
    }
    return 0;
}
void signin(){
    char username[100],password[100],checkuser[100],checkpass[100];
    int choice;
    FILE *fp;
    fp=fopen("database.txt","r");
    fscanf(fp,"%s\n",checkuser);
    fscanf(fp,"%s",checkpass);
    fclose(fp);
    decryption(checkuser,checkpass);
    printf("\t\tSIGN IN\n");
    printf("Enter your username: ");
    gets(username);
    if(!strcmp(username,checkuser)){
        printf("Enter your password: ");
        gets(password);
        if(!strcmp(password,checkpass)){
            printf("1.Check result\n2.Data entry\n");
            printf("What do you want? ");
            scanf("%d",&choice);
            getchar();
            if(choice==1){
                result();
            }
            else if(choice==2){
                dataentry();
                printf("1.Get result\n2.Back\n");
                scanf("%d",&choice);
                if(choice==1){
                    result();
                }
                else if(choice==2){
                    main();
                }
            }
        }
        else{
            printf("Incorrect username.");
            return signin();
        }
    }
}
void signup(){
    char username[100],password[100];
    printf("Follow the step to sign up: \n");
    printf("Enter your username: ");
    gets(username);
    printf("Enter your password: ");
    gets(password);
    encryption(username,password);
    FILE *fp;
    fp=fopen("database.txt","w");
    fprintf(fp,"%s\n",username);
    fprintf(fp,"%s",password);
    fclose(fp);
    printf("You successfully created your ID!\n");
    return signin();
}
void studentsignup(){
    char username[100],password[100];
    printf("Follow the step to sign up: \n");
    printf("Enter your username: ");
    gets(username);
    printf("Enter your password: ");
    gets(password);
    encryption(username,password);
    FILE *fp;
    fp=fopen("studentdatabase.txt","w");
    fprintf(fp,"%s\n",username);
    fprintf(fp,"%s",password);
    fclose(fp);
    printf("You successfully created your ID!\n");
    studentlogin();
}
void studentlogin(){
    char username[100],password[100],checkuser[100],checkpass[100],name[100];
    int i;
    FILE *fp;
    fp=fopen("studentdatabase.txt","r");
    fscanf(fp,"%s\n",checkuser);
    fscanf(fp,"%s",checkpass);
    fclose(fp);
    decryption(checkuser,checkpass);
    printf("\t\tSIGN IN\n");
    printf("Enter your username: ");
    gets(username);
    if(!strcmp(username,checkuser)){
        printf("Enter your password: ");
        gets(password);
        if(!strcmp(password,checkpass)){
            printf("Result published. Enter your name to get result.\n");
            printf("Name: ");
            gets(name);
            i=0; 
            while(i<n_student){
                if(!strcmp(name,bsse14[i].name)){
                    printf("You got cgpa=%.2f\n",bsse14[i].cgpa);
                    break;
                }
                i++;
            }
            if(i==n_student){
                printf("We don't have any student with this name.\n Please re-login.\n");
                return studentlogin();
            }
        }
        else{
            printf("Wrong password!\n");
            return studentlogin();
        }
    }
    else{
        printf("Wrong username!\n");
        return studentlogin();
    }
}
void encryption(char *p,char *q){
    for(int i=0; *p; p++){
        *p=*p+1;
    }
    for(int i=0; *q; q++){
        *q=*q+1;
    }
}
void decryption(char *p,char *q){
    for(int i=0; *p; p++){
        *p=*p-1;
    }
    for(int i=0; *q; q++){
        *q=*q-1;
    }
}
void dataentry(){
    int i;
    FILE *fp;
    fp=fopen("input.txt","r");
    i=0; 
    while(!feof(fp)){
        fscanf(fp,"%s %d %f\n",bsse14[i].name,&bsse14[i].roll,&bsse14[i].cgpa);
        cgpa[i]=bsse14[i].cgpa;
        i++;
        n_student++;
    }
    fclose(fp);
    printf("Data entry successful!\n");
}
void result(){
    int i,j,store[n_student];
    float temp=0;
    for(i=0; i<n_student; i++){
        for(j=i+1; j<n_student; j++){
            if(cgpa[i]<cgpa[j]){
               temp=cgpa[i];
               cgpa[i]=cgpa[j];
               cgpa[j]=temp;
            }
        }
    }
    for(i=0; i<n_student; i++){
        for(j=0; j<n_student; j++){
            if(cgpa[i]==bsse14[j].cgpa){
                store[i]=j;
                break;
            }
        }
    }
    for(i=0; i<n_student; i++){
        bsse14[store[i]].ptr=&bsse14[store[i+1]];
    }
    FILE *fp;
    fp=fopen("result.txt","w");
    fprintf(fp,"Merit list:\n");
    fprintf(fp,"%s\t%d\t%.2f\n",bsse14[store[0]].name,bsse14[store[0]].roll,bsse14[store[0]].cgpa);
    i=0;
    while(i<n_student-1){
        fprintf(fp,"%s\t%d\t%.2f\n",bsse14[store[i]].ptr->name,bsse14[store[i]].ptr->roll,bsse14[store[i]].ptr->cgpa);
        i++;
    }
    fclose(fp);
}