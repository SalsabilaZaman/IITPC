#include "stdio.h"
#include "string.h"
#define num 4
void encrypt(char *s);
void decrypt(char *s);
int checkgmail(char *s);
typedef	struct class {
    char name[40];
    int roll;
    float cgpa;
    //   struct class * pointer;
} bsse;
int main() {
    bsse students[num];
    int flag = 0, flagp = 0;
    char com[] = "abc.@gmail.com";
    char comp[] = "ssdddasda";
    encrypt(comp);
    FILE *fp;
    fp = fopen("password.txt","w");
    fprintf(fp,"%s\n",com);
    fprintf(fp,"%s",comp);
    fclose(fp);
    char  check[40], checkp[40];
    fopen("password.txt","r");
    fscanf(fp,"%s",check);
    fscanf(fp,"%s",checkp);
    fclose(fp);
    decrypt(checkp);
    printf("%s\n%s\n",check,checkp);
    char input[40], password[40];
    printf("mail: ");
    scanf("%s",input);
    if (strcmp(input, check) && checkgmail(check)) flag = 1;
    printf("password: ");
    scanf("%s", password);
    decrypt(checkp);
    if (strcmp(password, checkp))flagp = 1;
    if (flag && flagp) {
        printf("Give input:\n");
        for (int i = 0; i < num; i++) {
            scanf("%s", students[i].name);
            scanf("%d", &students[i].roll);
            scanf("%f", &students[i].cgpa);
        }
        bsse variable;
        bsse *pointer;
        for (int i = 0; i < num; i++) {
            for (int j = i; j < num; j++) {
                if (students[i].cgpa > students[j].cgpa) {
                    variable = students[i];
                    students[i] = students[j];
                    students[j] = variable;
                }
            }
        }
        for (int i = 0; i < num; i++) {
            printf("place : %d %s %d %.2f\n", i+1, students[i].name, students[i].roll, students[i].cgpa);
        }
    }
    return 0;
}
void encrypt(char *s) {
    for(int i=0;s[i]!='\0';i++) s[i] +=2;
}
void decrypt(char *s) {
    for(int i=0;s[i]!='\0';i++) s[i] -=2;
}
int checkgmail(char *s){
    int index =0,p=0 ,q=0;
    for( int  i=0;s[i]!='\0';i++) {
        if(s[i]=='@') {
            index = i;
            q=1;
            break;
        }
    }
    if(q)if(s[index+1]=='g'&&s[index+2]=='m'&&s[index+3]=='a'&&s[index+4]=='i'&&s[index+5]=='l'&&s[index+6]=='.'&&s[index+7]=='c'&&s[index+8]=='o'&&s[index+9]=='m') p=1;
    if(p) printf("correct\n");
    return p;
}