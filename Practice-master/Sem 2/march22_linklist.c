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
 struct Node *head, *second, *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 13;
    

    while ( 8 )
    {
        scanf("%d ", second->data );
        if(second->data==0)
        {
            second->next = NULL ;
        }
        head -> next = second;
        second = second -> next ;

    }
    

    // second->data = 10;
    // second->next = third;

    // // terminate list at the third node
    // third->data = 15;
    // third->next = NULL;

    linklist_travarsal(head);
    
    head = insertion(head, 32);

    linklist_travarsal(head);

    head = deletion(head);

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
    struct Node *a;
    a = (struct Node *)malloc(sizeof(struct Node));
    a->data = num;
    a->next = head;
    head = a ;

    return head;
}

struct Node* deletion(struct Node *head)
{
    head = head->next ;

    return head;
}