// Q4. Write a program to print even number from 1 to 100 using while loop

#include <stdio.h>
int main()
{
    printf("Here are the numbers: \n");
    int a = 1;
    while (a <= 100)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
        a++;
    }
}