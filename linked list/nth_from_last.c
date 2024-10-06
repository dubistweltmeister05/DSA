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

int NthFromLast(struct node *head, int n)
{
    struct node *temp = head;

    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    if (n > len)
        return -1;

    struct node *a = head;
    for (int j = 1; j < (len - n + 1); j++)
    {
        a = a->next;
    }

    return a->data;
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

    printf("\n%d\n", NthFromLast(head, 5));
    return 0;
}