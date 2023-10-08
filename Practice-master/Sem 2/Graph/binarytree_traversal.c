#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int root;
    struct tree *left;
    struct tree *right;
};

struct tree* newNode(int data)
{
    struct tree *node = (struct tree*)malloc(sizeof(struct tree));
    node->root = data;
    node->left = node->right = NULL;
    return node;
}

struct tree* create(int arr[], int i, int n)
{
    struct tree *root = NULL;
    if(i < n){
        root = newNode(arr[i]);
        root->left = create(arr,(2*(i+1)-1),n);
        root->right = create(arr,(2*(i+1)),n);
    }
    return root;
}

struct stack
{
    int size;
    int top;
    int *arr;
    //struct stack *next;
};

int pre_traversal(struct tree *s )
{
    printf("%d ",s->root);
    if(s->left)
    {
        pre_traversal(s->left);
    }
    
    if (s->right)
    {
        pre_traversal(s->right);
    }
    
}

int inorder_traversal(struct tree *s )
{
    if( s != NULL )
    {
        inorder_traversal(s->left);
        printf("%d ",s->root);
        inorder_traversal(s->right);
    }
}

int postorder_traversal(struct tree *s )
{
    if( s != NULL )
    {
        postorder_traversal(s->left);
        postorder_traversal(s->right);
        printf("%d ",s->root);
    }
}



int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int) ;
    //struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    struct tree *t1 = create(arr, 0, n);


    pre_traversal(t1);
    printf("\n");
    inorder_traversal(t1);
    printf("\n");
    postorder_traversal(t1);

/*
                1
          2           3
        4   5       6   7
*/    
    // sp->size = 10;
    // sp->top = -1; //since, at this point there is no element in the stack
    // sp->arr = (int *) malloc(sizeof(int) * sp->size);
    // printf("Stack Created successfully!\n");

    // printf("Before pushing: Full? %d and Empty? %d\n",isFull(sp),isEmpty(sp));
    // push(sp,10);
    // push(sp,20);


    // printf("After pushing: Full? %d and Empty? %d\n",isFull(sp),isEmpty(sp));

    // // printf("%d popped from the stack\n", pop(sp));
  
    // printf("%d is at the top of the stack\n", stackTop(sp));
    // printf("%d is at the bottom of the stack\n", stackBottom(sp));


    return 0;
}


int isEmpty( struct stack *ptr)
{
    if ( (ptr->top) == -1 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isFull( struct stack *ptr)
{
    if ( ptr->top == ptr->size-1 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void push(struct stack *ptr,int value)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow!\nCannot push the value %d\n", value);
    }
    else 
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        //return -1;
        printf("Empty stack , Can't pop.\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr, int position)
{
    int arrIndex = ( ptr->top - position + 1 );
    if( arrIndex < 0 )
    {
        printf("Not a valid position!\n");
    }
    else{
        return ptr->arr[arrIndex];
    }
}

int stackTop(struct stack* s)
{
    return s->arr[s->top];
}

int stackBottom(struct stack *s)
{
    return s->arr[0];
}