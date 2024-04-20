#include <stdio.h>

int sum(int arr[]);
int *sort(int arr[]);
int main()
{
    int i, result;
    int a[5];
    int b[5] = {1, 2, 3, 4, 5};
    int c[5] = {};
    int *d;
    int j = 10;
    printf("a[5] \n");
    for (int i = 0; i < 5; i++)
    {
        a[i] = j;
        j += 10;
        printf("%d ", a[i]);
    }

    printf("\nOut of index a[5]: %d\n", a[5]);

    printf("The Storage happens at continuous locations -\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &a[i]);
    }

    printf("Pointer Indication\n");

    printf("The Array variable name points to the same location as that of the First Index\n");

    printf("Address of a[0] %ld\n", &a[0]);

    printf("Address of a %ld\n", &a);

    printf("Traverse using Pointer\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(a + i));
    }

    printf("Commutative property\n");
    printf("a[2] = %d\n", a[2]);
    printf("2[a] = %d\n", 2 [a]);

    printf("\nMulti-dimensional array(4 X 4): \n");
    int mulArr[4][4], k = 0;
    for (int a = 0; a < 4; a++)
    {
        for (int b = 0; b < 4; b++)
        {
            mulArr[a][b] = k;
            k++;
            printf("%d ", mulArr[a][b]);
        }
        printf("\n");
    }

    result = sum(b);

    printf("Sum of elements of b[5] =  %d", result);

    int x[5] = {4, 1, 7, 2, 9};

    printf("\nSorting the array x: ");

    int n = sort(x);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }

    return 0;
}

int sum(int arr[])
{
    int i, add = 0;
    for (i = 0; i < 5; i++)
    {
        add += arr[i];
    }
    return add;
}

int *sort(int *arr)
{
    int temp, i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}