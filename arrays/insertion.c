#include <stdio.h>

void insert(int *arr, int index, int num, int capacity)
{
    if (index >= capacity)
        printf("Cannot overflow the array, dumbass!");
    else
    {
        for (int i = capacity; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = num;
    }
}
int main()
{
    int arr[20] = {12, 16, 20, 40, 50, 70};
    insert(arr, 4, 69, 20);
    for (int i = 0; i < 20; i++)
        printf("%d ", arr[i]);

    return 0;
}