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

void InsertAtBeg(struct node *head, int element)
{

    struct node *temp = allocate;
    temp->data = element;
    temp->next = head;
    head = temp;
    printf("\nAfter adding another node at the head\n");
    printLL(head);
}

void InsertAtEnd(struct node *head, int element)
{
    struct node *a;
    struct node *temp;
    a = allocate;
    a->data = element;
    a->next = NULL;
    temp = allocate;
    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = a;

    // free(temp);
    printf("\nAfter adding another node at the end\n");
    printLL(head);
}

int main()
{
    struct node *head;
    head = new (head);
    struct node *first;
    first = new (first);
    struct node *second;
    second = new (second);
    struct node *third;
    third = new (third);
    struct node *fourth;
    fourth = new (fourth);
    struct node *last;

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
    printf("Before adding another node at the head\n");
    printLL(head);
    InsertAtEnd(head, 69);
    return 0;
}