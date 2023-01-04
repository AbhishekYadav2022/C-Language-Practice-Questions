// Selection Sort in C

#include <stdio.h>
int main()
{
    int c = 0;
    // <-----------Swapping ----------->
    int a = 5, b = 6, temp;
    printf("a is %d, b is %d\n", a, b);
    // Swapping
    temp = a;
    a = b;
    b = temp;
    printf("a is %d, b is %d\n", a, b);

    // <-----------Minumum ----------->
    int arr[10] = {5, 3, 6, 1, 8, 9, 0, 2, 4, 7};

    // int min;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }
    // printf("Minimum number is %d", min);

    // <-----------Sorting------------->
    // for (int i = 0; i < 10; i++)
    // {
    // Finding Minimum Number
    int min;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            c = i;
        }
    }
    printf("Position of minumum number is arr[%d]\n", c);
    printf("Minimum number is %d\n", min);
    printf("First element of array is %d", arr[0]);
    temp = arr[c];
    arr[c] = arr[0];
    arr[0] = temp;

    // Printing Array
    for (int i = 0; i < 10; i++)
    {
        printf("%3d", arr[i]);
    }
    // }
}