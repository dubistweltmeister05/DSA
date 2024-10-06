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

void InsertAtIndex(struct node *head, int index, int element)
{
    int count = 0;
    struct node *a;
    a = allocate;
    a->data = element;
    struct node *temp;
    temp = head;

    while (count != index - 1)
    {
        count++;
        temp = temp->next;
    }
    a->next = temp->next;
    temp->next = a;

    printf("\nAfter adding another node at the index %d \n", index);
    printLL(head);
}

void DeleteAtIndex(struct node *head, int n)
{
    struct node *temp = head;
    struct node *temp1 = allocate;

    if (n == 1)
    {
        head = temp->next;
        free(temp);
    }
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            temp = temp->next;
            temp1 = temp->next;
            temp->next = temp1->next;
            free(temp1);
        }
    }
    printf("\nAfter deleting the node at index %d \n", n);
    printLL(head);
}

struct node *Reverse(struct node *head)
{
    struct node *current = head;
    struct node *prev = NULL;
    struct node *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

void reverseprint(struct node *head)
{
    if (head == NULL)
        return;
    reverseprint(head->next);
    printf("\n%d\n", head->data);
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
    // head = Reverse(head);

    printf("\nafter reversal\n");
    reverseprint(head);
    // printLL(head);
    return 0;
}