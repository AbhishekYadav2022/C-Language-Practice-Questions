// Q3. Write a c program to print number from 1 to given number.

#include <stdio.h>
int main()
{
    printf("Enter the number here: ");
    int i = 1;
    int a;
    scanf("%d", &a);
    while (i <= a)
    {
        printf("%d\n", i);
        i++;
    }
}