#include <stdio.h>

void reverse(int *arr, int start, int end)
{
    while (start < end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArr(int *arr, int capacity)
{
    for (int i = 0; i < capacity; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, 0, size - 1);
    printArr(arr, size);
    return 0;
}