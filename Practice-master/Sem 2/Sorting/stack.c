#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

struct stack* createstack( int size )
{
    struct stack *s = (struct stack*) malloc(sizeof(struct stack));

    s->size = size ;
    s->arr[size] ;
    s->top = -1 ;
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
    else
    {
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
    else
    {
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