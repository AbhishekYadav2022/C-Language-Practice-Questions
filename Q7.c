// Q7. Write a c program to print number from 1 to 100 using do while loop.

#include <stdio.h>
int main()
{
    printf("Here is numbers from 1 to 100\n");
    int a = 1;
    do
    {
        printf("%d\n", a);
        a++;
    } while (a <= 100);
}