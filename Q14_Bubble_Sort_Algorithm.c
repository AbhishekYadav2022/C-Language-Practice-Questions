#include <stdio.h>

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int i, j, temp, n = sizeof(arr) / sizeof(arr[0]);

    // Printing unsorted array
    for (i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");

    // Sorting array
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Printing sorted array
    for (i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }

    return 0;
}