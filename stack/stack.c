#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct stack
{
    int size;
    int top;
    int *array;
};
struct stack *creation(int size)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = size;
    s->array = (int *)malloc(sizeof(int) * size);
    return s;
}
void display(struct stack *s)
{
    int i;
    if (isEmpty(s))
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("Elements in the stack: \n");
        for (i = s->top; i >= 0; i--)
        {
            printf("%d\n", s->array[i]);
        }
    }
}
int isEmpty(struct stack *s)
{
    int Empty = (s->top == -1);

    return Empty;
}
int isFull(struct stack *s)
{
    int Full = (s->top == s->size - 1);
    return Full;
}
void push(struct stack *s, int element)
{
    if (isFull(s))
    {
        return;
    }
    int index = ++s->top;
    s->array[index] = element;
    printf("\n%d pushed into the stack\n", element);
    display(s);
}
int pop(struct stack *s)
{
    if (isEmpty(s))
    {
        return INT_MIN;
    }
    int index = s->top--;
    return s->array[index];
}
int peek(struct stack *s)
{
    if (isEmpty(s))
    {
        return INT_MIN;
    }
    int index = s->top;
    return s->array[index];
}
void main()
{
    struct stack *s = creation(50);
    push(s, 100);
    push(s, 200);
    push(s, 300);
    pop(s);
    printf("\nAfter pop operation, elements in the stack: \n");
    display(s);
}