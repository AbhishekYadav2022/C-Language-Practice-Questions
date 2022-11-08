// Q8. Write a program to find out sum of numbers from 1 to that number.

#include <stdio.h>
int main()
{
    int num, sum = 0, i = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= num);
    printf("Sum: %d", sum);
    return 0;
}