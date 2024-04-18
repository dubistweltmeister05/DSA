#include <stdio.h>

void swap(int *arr, int n, int m)
{
    int temp;
    temp = arr[m];
    arr[m] = arr[n];
    arr[n] = temp;
}

void selectionsort(int *array, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int m = i + 1; m < n; m++)
        {
            if (array[m] < array[minIndex])
                minIndex = m;
        }

        swap(array, i, minIndex);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int array[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(array) / sizeof(array[0]);
    // printArray(array, n);
    selectionsort(array, n);
    printArray(array, n);
    return 0;
}