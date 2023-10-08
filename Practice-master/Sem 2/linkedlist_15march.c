// #include<stdio.h>

// struct node
// {
//     int data;
//     int key;
//     struct node *next;
// };

// int main ()
// {
//     struct node a, b, c, *ptr ;

//     a.data = 01 ;
//     b.data = 02 ;
//     c.data = 03 ;
//     a.key = 8326;
//     b.key = 2461;
//     c.key = 4244;
//     a.next = &b;
//     b.next = &c;
//     c.next = NULL;

//     ptr = &a ;
//     while (ptr!= NULL)
//     {
//         printf("Roll : %d - %d . \n", ptr->data, ptr->key);
//         ptr = ptr->next ;
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linklist_travarsal(struct Node *head );
void insertion(struct Node **head, int num);



int main()
{
 struct Node *head, *second, *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 10;
    second->next = third;

    // terminate list at the third node
    third->data = 15;
    third->next = NULL;

    linklist_travarsal(head);
    
    insertion(&head, 32);

    linklist_travarsal(head);

    //printf("%d--->", head->data);



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

void insertion(struct Node **head, int num)
{
    struct Node *a;
    a = (struct Node *)malloc(sizeof(struct Node));
    a->data = num;
    a->next = *head;
    *head = a ;
}