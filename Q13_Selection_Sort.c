// Selection Sort In C
#include <stdio.h>
int main()
{

    int i, j, min_index, temp;
    int arr[] = {10, 21, 20, 13, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Printing array before sorting
    for (i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");

    // Sorting array
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                temp = arr[min_index];
                arr[min_index] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Printing array before sorting
    for (i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }

    return 0;
}