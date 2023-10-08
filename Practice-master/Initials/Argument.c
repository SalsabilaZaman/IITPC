#include<stdio.h>

void sum(int x, int y);

int main()
{
    sum(34,25);
    sum(79,24);
    sum(223,79);
    return 0;
}
void sum(int x, int y)
{
    printf("%d\n",x+y);
}
