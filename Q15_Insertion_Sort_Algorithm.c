#include <stdio.h>

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int i, j, key, temp, n = sizeof(arr) / sizeof(arr[0]);

    // Printing unsorted array
    for (i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");

    // Sorting array
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // Printing sorted array
    for (i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }

    return 0;
}