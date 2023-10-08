#include<stdio.h>
#include<string.h>

int withdraw(char acc,int balance){
    char name;
    gets(name);
    for(int i=0;i<2;i++){
        if(strcmp(name,acc[i])!=0){
            printf("%d",acc[i]-);
        }


    }    

}

int deposit(){


}

int main(){
    //int n;
    //scanf("%d",&n);
    char acc[2][40];
    int balance[2];
    char choice;
    FILE *fp;
    fp=fopen("bank.txt", "r");
    fscanf(fp,"%s %d %s %d",acc[0],&balance[0],acc[1],&balance[1]);
    printf("\n%s %d \n%s %d\n",acc[0],balance[0],acc[1],balance[1]);
    printf("Enter your choice:");
    scanf("%c",&choice);
    if(choice=='1'){
        withdraw(acc,balance);
    }

    else if(choice=='2'){
        deposit(acc,balance);
    }

    fclose(fp);

    return 0;
}