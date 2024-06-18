#include <stdio.h>

int binarySearch(int *arr, int low, int high, int n)
{
    if (high >= low)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == n)
            return mid;

        if (arr[mid] > n)
            return binarySearch(arr, 0, mid - 1, n);

        return binarySearch(arr, mid + 1, high, n);
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}