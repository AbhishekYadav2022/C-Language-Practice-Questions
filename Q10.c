// C program to find out greatest numbers of three numbers.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the greatest number.", a);
        }
        else
        {
            printf("%d is the greatest number.", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is the greatest number.", b);
        }
        else
        {
            printf("%d is the greatest number.", c);
        }
    }
}