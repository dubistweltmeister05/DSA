#include <stdio.h>
#define allocate (struct node *)malloc(sizeof(struct node))

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = allocate;
    two = allocate;
    three = allocate;

    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}