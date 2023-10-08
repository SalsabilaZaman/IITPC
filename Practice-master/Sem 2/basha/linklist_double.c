#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *previous;
    struct Node *next;
};

void linklist_travarsal(struct Node *head, struct Node *st );


int main()
{
 struct Node *head, *second, *third, *st;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    st = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    second->data = 10;
    third->data = 15;
    
    head->previous = NULL ;
    head->next = second;
    st = head ;

    
    second->previous = head ;
    second->next = third;

    
    third->previous = second;
    third->next = NULL;

    linklist_travarsal( head, st );


    return 0;
}

void linklist_travarsal(struct Node *head, struct Node *st )
{
    printf("%d \n", head->data);
    head = head->next;
    while( 1 )
    {
        printf("%d \t", head->previous->data);
        printf("%d \t", head->data);
        printf("%d \n", head->next->data);
        head = head->next;
        
    }
    printf("\n");
}