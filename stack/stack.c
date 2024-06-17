#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct stack
{
    int top;
    unsigned int capacity;
    int *array;
} __attribute__((__packed__));

struct stack *createstack(unsigned int capacity)
{
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(struct stack *stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct stack *stack)
{
    return stack->top == -1;
}

void push(struct stack *stack, int value)
{
    if (isFull(stack))
    {
        printf("Stack is full, cannot push\n");
    }

    else
    {
        stack->array[++stack->top] = value;
        printf("The value being pushed in the stack is :- %d\n", value);
    }
}

int pop(struct stack *stack)
{
    if (isEmpty(stack))
    {
        return INT_MIN;
    }
    return (stack->array[stack->top--]);
}

int peek(struct stack *stack)
{
    if (isEmpty(stack))
    {
        return INT_MIN;
    }
    return stack->array[stack->top];
}

int main()
{
    struct stack *stack = createstack(100);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("%d popped from stack\n", pop(stack));

    return 0;
}