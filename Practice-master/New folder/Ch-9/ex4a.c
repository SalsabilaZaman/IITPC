#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int loc=0;
char names[100][40];
char nums[100][40];

int menu()
{
    int i;
    char str[80];
    do
    {
        printf("1.Enter name and number: \n");
        printf("2.Find numbers: \n");
        printf("3.Save to disk: \n");
        printf("4.Load directory: \n");
        printf("5.Quit: \n");
        gets(str);
        i=atoi(str);
        printf("\n");
    }
    while(i<1 || i>5);
    return i;
}
void enter()
{
    for(;loc<100;loc++)
    {
        if(loc<100)
        {
            printf("Enter name and number: ");
            gets(names[loc]);
            if(!*names[loc])
                break;
            gets(nums[loc]);
        }
    }
}

void find()
{
    char name[80];
    int i;
    printf("Enter name: ");
    gets(name);

    for(i=0; i<100; i++)
    {
        if(!strcmp(name, names[i]))
            printf("%s %s\n", names[i], nums[i]);
    }
}

void load()
{
    FILE *fp;

    fp=fopen("phone.txt", "r");
    loc=0;

    while(!feof(fp))
    {
        fscanf(fp, "%s%s", names[loc], nums[loc]);
        loc++;
    }
    fclose(fp);
}

void save()
{
    FILE *fp;
    int i;
    fp=fopen("phone.txt", "w");

    for(i=0; i<loc; i++)
    {
        fprintf(fp, "%s %s ", names[i], nums[i]);
    }
    fclose(fp);
}
int main()
{
    int choice;
    do
    {
        choice= menu();
        switch(choice)
        {
        case 1:
            enter();
            break;
        case 2:
            find();
            break;
        case 3:
            save();
            break;
        case 4:
            load();
            break;
        }
    }
    while(choice!=5);

    return 0;
}
