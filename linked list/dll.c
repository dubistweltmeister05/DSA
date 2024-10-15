#include <stdio.h>
#define allocate (struct node *)malloc(sizeof(struct node))

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{

    return 0;
}