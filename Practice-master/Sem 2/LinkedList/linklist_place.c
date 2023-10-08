#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linklist_travarsal(struct Node *head );
struct Node* insertion(struct Node *head, int pos, int num);
struct Node* deletion(struct Node *head, int pos);
struct Node* deletionByNumber(struct Node *head, int num);

int main()
{
    int pos, number;
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
    printf("Insertion position and number : ");
    scanf("%d %d",&pos, &insert);
    head = insertion(head, pos, insert);
    printf("After Insertion :\n");
    linklist_travarsal(head);

    // printf("Deletion position : ");
    // scanf("%d",&pos);
    // head = deletion(head, pos-1);

    printf("Deletion number : ");
    scanf("%d",&number);
    head = deletionByNumber(head, number);

    printf("After Deletion :\n");
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

struct Node* insertion(struct Node *head, int pos, int num)
{
    struct Node *ptr =  (struct Node *)malloc(sizeof(struct Node));
    struct Node *a;
    
    a = (struct Node *)malloc(sizeof(struct Node));
    a = head ;
    pos--;

    while( pos !=1 )
    {
        a = a->next;
        pos--;
    }
    
    ptr->data = num;
    ptr->next = a->next;
    a->next = ptr;

    return head;

}

struct Node* deletion(struct Node *head, int pos)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *a;
    a = (struct Node *)malloc(sizeof(struct Node));
    a = head ;

    while( pos!=1 )
    {
        a = a->next;
        pos--;
    }
    ptr = a->next ;
    a->next = ptr->next ;

    return head;
}

struct Node* deletionByNumber(struct Node *head, int num)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *a;
    a = (struct Node *)malloc(sizeof(struct Node));
    a = head ;

    while( a->next->data != num )
    {
        a = a->next;
        if (a->next == NULL)
        {
            printf("Couldn't find the number.\n");
            return head;
        }
        
    }
    ptr = a->next ;
    a->next = ptr->next ;

    return head;
}