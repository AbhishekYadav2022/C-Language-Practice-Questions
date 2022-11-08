// Q6. Write a c program to print reverse of a given number. 

#include <stdio.h>
int main()
{
    printf("Enter any numberber here: ");
    int number, remainder, reverse = 0;
    scanf("%d", &number);
    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    printf("Reverse = %d\n", reverse);
    return 0;
}