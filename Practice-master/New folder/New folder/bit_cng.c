#include<stdio.h>

union crypt_type
{
    int num;
    char ch[4];
}crypt;
    
int encode(int i)
{
    crypt.num=i;
    unsigned char temp=crypt.ch[0];
    crypt.ch[0]=crypt.ch[1];
    crypt.ch[1]=temp;
   
    return crypt.num;
}

int decode(int i)
{
    crypt.num=i;
    unsigned char temp=crypt.ch[0];
    crypt.ch[0]=crypt.ch[1];
    crypt.ch[1]=temp;
   
    return crypt.num;
}

int main()
{
    FILE *fp;
    int marks[4];
    fp=fopen("marks.txt","r");
    for(int i=0;i<4;i++) fscanf(fp,"%d",&marks[i]);
    fclose(fp);
    for(int i=0;i<4;i++) printf("%d ",marks[i]);
    fp=fopen("encode.txt","w");
    for(int i=0;i<4;i++) fprintf(fp,"%d\n",encode(marks[i]));
    fclose(fp);
    fp=fopen("encode.txt","r");
    for(int i=0;i<4;i++) fscanf(fp,"%d",&marks[i]);
    fclose(fp);
    fp=fopen("decode.txt","w");
    for(int i=0;i<4;i++) fprintf(fp,"%d\n",decode(marks[i]));
    fclose(fp); 
}