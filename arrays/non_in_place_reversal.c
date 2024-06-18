#include <stdio.h>

void reverse(int *arr, int capacity)
{
    int retArr[capacity];
    for (int i = 0; i < capacity; i++)
    {
        retArr[i] = arr[capacity - i - 1];
    }

    for (int i = 0; i < capacity; i++)
    {
        printf(" %d ", retArr[i]);
    }
}
int main()
{
    int originalArr[] = {1, 2, 3, 4, 5};
    int size = sizeof(originalArr) / sizeof(originalArr[0]);
    reverse(originalArr, size);

    return 0;
}