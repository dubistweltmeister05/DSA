#include <limits.h>
#include <stdio.h>

void printsecondlargest(int arr[], int arr_size)
{
    int i, first, second;

    if (arr_size < 3)
    {
        printf(" Invalid Input ");
        return;
    }

    first = second = 0;
    for (i = 0; i < arr_size; i++)
    {

        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }

        else if (arr[i] > second)
        {

            second = arr[i];
        }
    }

    printf("Second Largest element is \n %d \n", second);
}
int main()
{
    int arr[] = {10, 203, 350, 3565, 345, 879, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printsecondlargest(arr, n);
    return 0;
}