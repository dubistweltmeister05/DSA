#include <stdio.h>

void swap(int *a, int *b)
{
    int *temp = 0;
    *temp = *a;
    *a = *b;
    *b = *temp;
}

void sort_pos(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] < array[i + 1])
        {
            // printf("I am in\n");
            swap(&array[i], &array[i + 1]);
        }
    }
}

void printArr(int *Array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", Array[i]);
    }
}

int main()
{
    int array[4] = {1, 2, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);
    sort_pos(array, size);
    printArr(array, size);
    return 0;
}