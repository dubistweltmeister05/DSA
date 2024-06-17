#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

void moveZeroes(int *arr, int n)
{
    int end = arr[n - 1];
}

int main()
{
    int array[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
    int n = sizeof(array) / sizeof(array[0]);
    moveZeroes(array, n);
    return 0;
}