#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
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
    head->next = second;
    st = head ;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = head;

    linklist_travarsal( head, st );


    return 0;
}

void linklist_travarsal(struct Node *head, struct Node *st )
{
    printf("%d \n", head->data);
    head = head->next;
    while( 1 )
    {
        printf("%d \n", head->data);
        head = head->next;
        if ( head == st )
        {
            break;
        }
        
    }
    printf("\n");
}