#include <stdio.h>
#include <stdlib.h>
struct Std
{
    int roll;
    int data;
    struct Std *next;
};

void linklist_travarsal(struct Std *head );
struct Std* insertion(struct Std *head, int roll, int num);
struct Std* deletion(struct Std *head, int roll);


int main()
{
    struct Std *head, *tmp, *start;
    head = (struct Std *)malloc(sizeof(struct Std));
    start = (struct Std *)malloc(sizeof(struct Std));
    start = head ;

    int student[5];   // ={32,24,56,22,75}  = {10,12,13,24,25}
    int roll[5];
    
    int temp;
    for (int i = 0; i < 5; i++)
    {
        printf("Roll : ");
        scanf("%d",&roll[i] );
        printf("Number : ");
        scanf("%d",&student[i] );
    }

    for (int j = 0; j < 5; j++)
    {
        for (int i = 1; i < 5; i++)
        {
            if (student[i-1]<student[i])
            {
                temp = student[i-1] ;
                student[i-1] = student[i] ;
                student[i] = temp ;
                temp = roll[i-1];
                roll[i-1] = roll[i] ;
                roll[i] = temp ;
            }
        }
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d  %d\n",roll[i],student[i]);
    // }
    

    
    for (int i = 0; i < 5; i++)
    {
        head->roll = roll[i] ;
        head->data = student[i];
        if ( i == 4 )
        {
            head->next = NULL ;
            break;
        }
        tmp = (struct Std *)malloc(sizeof(struct Std));
        head->next = tmp;
        head = tmp ;
    }
    

    linklist_travarsal(start);
    
    start = insertion(start, 72, 22);

    linklist_travarsal(start);

    start = deletion(start, 32);

    linklist_travarsal(start);

    return 0;
}

void linklist_travarsal(struct Std *head )
{
    while( 1 )
    {
        printf("%d : ", head->roll);
        printf("%d \n", head->data);
        
        if (head->next == NULL)
        {
           break;
        }

        head = head->next;
    }
    printf("\n");
}

struct Std* insertion(struct Std *head, int roll, int num)
{
    struct Std *ptr =  (struct Std *)malloc(sizeof(struct Std));
    struct Std *a;
    
    a = (struct Std *)malloc(sizeof(struct Std));
    a = head ;

    if( a->data < num )
    {
        ptr->data = num;
        ptr->roll = roll;
        ptr->next = a->next;
        a->next = ptr;

        return head;
    }

    while( a->next->data >= num )
    {
        a = a->next;
    }
    
    ptr->data = num;
    ptr->roll = roll;
    ptr->next = a->next;
    a->next = ptr;

    return head;

}

struct Std* deletion(struct Std *head, int roll)
{
    struct Std *ptr;
    ptr = (struct Std *)malloc(sizeof(struct Std));
    struct Std *a;
    a = (struct Std *)malloc(sizeof(struct Std));
    a = head ;

    while( roll != a->next->roll )
    {
        a = a->next;
    }
    ptr = a->next ;
    a->next = ptr->next ;

    return head;
}