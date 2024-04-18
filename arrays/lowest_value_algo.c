#include <stdio.h>
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 9, 46, 0, 5766};
    int minVal = array[0];
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
    {
        if (array[i] < minVal)
            minVal = array[i];
    }
    printf("%d\n", minVal);
    return 0;
}
