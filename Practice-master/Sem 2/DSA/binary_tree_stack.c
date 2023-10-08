#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
struct node *insert()
{
    int value;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&value);
    if(value==-1)
    {
        return NULL;
    }
    temp->data=value;
    printf("Enter left child of %d:\n",value);
    temp->left=insert();
    printf("Enter right child of %d:\n",value);
    temp->right=insert();
    return temp;
}

void preOrder(int size)
{
    struct node *stack[size];
    int top=-1;
    if( root == NULL ) return;
    stack[++top]=root;
    while( top >= 0)
    {
        struct node *temp = stack[top--];
        printf("%d ",temp->data);

        if(temp->right!=NULL)
        stack[++top] = temp->right;
        
        if(temp->left!=NULL)
        stack[++top] = temp->left;
    }
}

void inOrder(int size)
{
    struct node *stack[size], *current;
    int top = -1;
    current = root;

    while( current != NULL || top != -1 )
    {
        while( current != NULL )
        {
            stack[++top]=current;
            current = current->left;
        }

        current = stack[top--];

        printf("%d ",current->data);
        
        current=current->right;
    }
}

void postOrder(int size)
{
    struct node *stack[size], *current, *lastvisited, *peek;
    int top=-1;
    current = root;
    lastvisited = NULL;

    while( current!=NULL || top!=-1 )
    {
        while(current!=NULL)
        {
            stack[++top]=current;
            current=current->left;
        }

        peek = stack[top];
        
        if( peek->right==NULL || peek->right==lastvisited )
        {
            printf("%d ",peek->data);
            lastvisited = peek;
            top--;
        }
        else
        {
            current=peek->right;
        }
    }
}

void levelOrder(int size)
{
    struct node *queue[size];
    int front=0,rear=0,level=1;
    if(root==NULL)
    return;
    queue[rear++]=root;
    
    while(front<rear)
    {
        struct node *temp = queue[front++];
        printf("%d ", temp->data);
        level--;
        
        if(temp->left!=NULL)
        queue[rear++]=temp->left;
        if(temp->right!=NULL)
        queue[rear++]=temp->right;
        if(level==0){
        printf("\n");
        level = rear-front;
        }
    }
}

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    root=insert();
    preOrder(n);
    printf("\n\n");
    inOrder(n);
    printf("\n\n");
    postOrder(n);
    printf("\n\n");
    levelOrder(n);
    return 0;
}