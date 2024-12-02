#include <stdio.h>

void merge(int *a, int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftarr[n1], rightarr[n2];
    for (i = 0; i < n1; i++)
        leftarr[i] = a[left + i];
    for (j = 0; j < n2; j++)
        rightarr[j] = a[mid + 1 + j];
    i = 0;
    j = 0;
    k = right;

    while (i < n1 && j < n2)
    {
        if (leftarr[i] <= rightarr[j])
        {
            a[k] = leftarr[i];
            i++;
        }
        else
        {
            a[k] = rightarr[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = leftarr[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = rightarr[j];
        j++;
        k++;
    }
}

void mergeSort(int *a, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(a, left, mid);
        mergeSort(a, ++mid, right);

        merge(a, left, mid, right);
    }
}

void printarr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    int a[] = {3, 41, 52, 26, 38, 57, 9, 49};
    int size = sizeof(a) / sizeof(a[0]);
    mergeSort(a, 0, size - 1);
    printarr(a, size);
    return 0;
}