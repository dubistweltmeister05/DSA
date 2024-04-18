#include <stdio.h>
void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void bubblesort(int *array, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
                swap(array, j, j + 1);
        }
    }
}
int main()
{
    int array[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(array) / sizeof(array[0]);
    bubblesort(array, n);
    printArray(array, n);
    return 0;
}