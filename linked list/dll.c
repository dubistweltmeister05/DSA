#include <stdio.h>
#include <stdlib.h>

#define allocate (struct node *)malloc(sizeof(struct node))

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;

struct node *GetNewNode(int x)
{
    struct node *new = allocate;
    new->data = x;
    new->next = NULL;
    new->prev = NULL;
    return new;
}

void InsertAtHead(int x)
{
    struct node *temp = GetNewNode(x);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void print_dll(struct node *head)
{
    printf("\nForward Mate\n");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void Reverse_PrintDLL(struct node *head)
{
    printf("\nGoing Back\n");
    struct node *temp = head;
    // go to the end node of the DLL
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->prev;
    }
}
int main()
{
    head = NULL;
    InsertAtHead(2);
    print_dll(head);
    Reverse_PrintDLL(head);

    InsertAtHead(4);
    print_dll(head);
    Reverse_PrintDLL(head);

    InsertAtHead(6);
    print_dll(head);
    Reverse_PrintDLL(head);

    return 0;
}