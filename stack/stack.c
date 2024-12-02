#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_SIZE 101
int a[MAX_SIZE];
int top = -1;

void push(int num)
{
    if (top == MAX_SIZE)
    {
        printf("the stack is full mate\n");
        return;
    }
    a[++top] = num;
}

void pop()
{
    if (top == -1)
    {
        printf("the stack is empty\n");
        return;
    }
    top--;
}

int Top()
{
    return a[top];
}

void prints()
{
    printf("\n Stack \n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    push(6);
    push(69);
    push(32);
    push(21);
    pop();
    push(99);
    prints();
}