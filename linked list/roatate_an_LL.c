#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


struct Node *rotate(struct Node *head, int k)
{
    if (!head || k == 0)
        return head;

    struct Node *current = head;
    int length = 1;
    while (current->next)
    {
        current = current->next;
        length += 1;
    }

    k = k % length;
    if (k == 0)
        return head;


    current->next = head;


    int stepsToNewHead = length - k;
    struct Node *newTail = head;
    for (int i = 1; i < stepsToNewHead; i++)
    {
        newTail = newTail->next;
    }

    // Update pointers
    struct Node *newHead = newTail->next;
    newTail->next = NULL;

    return newHead;
}

void printList(struct Node *head)
{
    struct Node *current = head;
    while (current)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}


int main()
{
    struct Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    int k = 2;
    head = rotate(head, k);
    printList(head);

    return 0;
}
