#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linklist_travarsal(struct Node *head );
struct Node* insertion(struct Node *head, int num);
struct Node* deletion(struct Node *head);


int main()
{
    struct Node *head, *second, *temp;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    
    printf("Enter the linked data :  ('-1' to terminate)\n");
    scanf("%d",&head->data);
    head->next = temp;
    second = head;

    while ( temp->data != -1 )
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        int t;
        scanf("%d",&t);
        if( t == -1 )
        {
            second->next = NULL;
            break;
        } 
        temp->data = t ;
        second->next = temp ;
        second = temp ;
    }

    printf("\n");
    linklist_travarsal(head);
    
    int insert;
    printf("Insert number in the last : ");
    scanf("%d",&insert);
    head = insertion(head, insert);
    printf("After Insertion in the Last:\n");
    linklist_travarsal(head);

    head = deletion(head);
    printf("After Deletion in the Last:\n");
    linklist_travarsal(head);

    return 0;
}

void linklist_travarsal(struct Node *head )
{
    while( head != NULL )
    {
        printf("%d \n", head->data);
        head = head->next;
    }
    printf("\n");
}

struct Node* insertion(struct Node *head, int num)
{
    struct Node *ptr =  (struct Node *)malloc(sizeof(struct Node));
    struct Node *a;
    a = (struct Node *)malloc(sizeof(struct Node));
    a = head ;
    while( a->next != NULL )
    {
        a = a->next;
    }
    
    ptr->data = num;
    ptr->next = NULL;
    a->next = ptr;

    return head;

}

struct Node* deletion(struct Node *head)
{
    struct Node *a;
    a = (struct Node *)malloc(sizeof(struct Node));
    a = head ;

    while( a->next->next != NULL )
    {
        a = a->next;
    }
    a->next = NULL ;

    return head;
}