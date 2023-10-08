#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};


int isEmpty(struct stack *st);
int isFull(struct stack *st);
void push(struct stack *st, int num);
int pop(struct stack *st);



int main()
{
    //int *arr;
    struct stack *st;
    st = (struct stack *)malloc(sizeof(struct stack));
    st->size=5;
    st->top = -1;
    st->arr = (int*)malloc(sizeof(int)*st->size);

    //insertion :
    push(st, 13);
    push(st, 17);
    push(st, 15);
    push(st, 23);
    push(st, 33);
    push(st, 43);

    for (int i = 0; i < 5; i++)
    {
       printf("%d\n",st->arr[i]) ;
    }
    
    int x = pop(st);
    if(x!=0) printf("Popped : %d\n",x );
    else printf("Nothing to pop");
    
}

void push(struct stack *st, int num)
{
    if(isFull(st))
    {
        printf("No space available.\n");
    }
    else
    {
        st->top++;
        st->arr[st->top] = num;
    }
    
}

int pop(struct stack *st)
{
    if (isEmpty(st))
    {
        return 0;
    }
    else
    {
        st->top--;
        return st->arr[st->top+1];
    }
}

int isEmpty(struct stack *st)
{
    if(st->top==-1) return 1;
    else return 0;
}

int isFull(struct stack *st)
{
    if(st->top==st->size-1) return 1;
    else return 0;
}