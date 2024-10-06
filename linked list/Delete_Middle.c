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

int DeleteAtIndex(struct node *head, int n)
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
    // printf("\nAfter deleting the node at index %d \n", n);
    // printLL(head);
    return 1;
}

void Delete_Middle(struct node *head)
{
    int i = 0;
    struct node *temp = head;

    while (temp != 0)
    {
        i++;
        temp = temp->next;
    }

    if (DeleteAtIndex(head, (i + 1) / 2))
    {
        printf("\nDeleted\n");
    }
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

    Delete_Middle(head);

    return 0;
}