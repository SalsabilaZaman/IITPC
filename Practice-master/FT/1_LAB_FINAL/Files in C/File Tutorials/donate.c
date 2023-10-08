#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp= fopen("Donation.txt", "r");

    char name[20];
    int donation = 0, i;

    /*for(i=0; i<3; i++){
        printf("Enter your name:");
        scanf("%s",name);

        printf("Enter amount:");
        scanf("%d", &donation);

        fprintf(fp, "%s %d\n", name, donation);
    }*/

    char b[20];
    int sum =0;
    while(1){
        int code = fscanf(fp ,"%s", b);
        if(code == EOF) break;
        printf("%s ", b);
    
        code = fscanf(fp ,"%s", b);
        if(code == EOF) break;
        printf("%s\n", b);

        sum+= atoi(b);
    
    }

    printf("Total Donation: %d\n", sum);

    fclose(fp);

    return 0;
}