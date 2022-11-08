// Q1. Write a C program to print table of given number to given number?

#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Enter first number and second number here: ");
    scanf("%d%d", &a, &b);
    printf("Table: \n");

    for (a; a <= b; a++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d\n", a * i);
        }
        printf("\n");
    }
    return 0;
}
