#include <stdio.h>
#include <stdlib.h>
#define allocate (struct node *)malloc(sizeof(struct node))
struct node
{
    int data;
    struct node *next;
};

struct node *new(struct node *input)
{
    input = allocate;

    return input;
}

void printLL(struct node *head)
{
    struct node *temp = allocate;
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void Reverse(struct node *head)
{
    struct node *p = head;
    if (p->next == NULL)
    {
        head = p;
        return;
    }

    Reverse(p->next);
    struct node *q = p->next;
    q->next = p;
    p->next = NULL;

    printLL(head);
}
int main()
{
    struct node *head, *first, *second, *third, *fourth;

    head = new (head);
    first = new (first);
    second = new (second);
    third = new (third);
    fourth = new (fourth);

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = NULL;
    printf("\nBefore reversing\n");
    printLL(head);

    Reverse(head);
    // printLL(head);
    return 0;
}
