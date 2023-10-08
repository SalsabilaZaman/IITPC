#include<stdio.h>
#include<string.h>

int main()
{
    int i; 
    char wrd[1000];
    
    FILE *fp;
    fp = fopen("bd.txt","r");
    for( i=0; feof(fp)==0; i++)
    {
        wrd[i]=fgetc(fp);
    } 
    fclose(fp);

    for( i=0; wrd[i] ; i++)
    {
        printf("%c",wrd[i]);
    } 
    
    FILE *fpn = fopen("bd_new.txt","w");    

    for(i=0; i<strlen(wrd)-2; i++)
    {
        fprintf(fpn,"%c",wrd[i]);
    }
    
    fclose(fpn);

    return 0;
}