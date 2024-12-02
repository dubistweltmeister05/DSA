#include <stdio.h>
#include <stdlib.h>
#define allocate (struct node *)malloc(sizeof(struct node *))
struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL;

void push(int x)
{
    struct node *temp = allocate;
    temp->data = x;
    temp->link = NULL;
    top = temp;
}

void pop()
{
    struct node *temp = top;
    if (top == NULL)
        return;
    else
    {
        top = top->link;
        free(temp);
    }
}

void printLL(struct node *top)
{
    struct node *temp = top;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
}
int main()
{
    push(4);
    push(5);
    push(69);
    push(21);
    push(999);
    printLL(top);
    return 0;
}