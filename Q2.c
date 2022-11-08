// Q2. Write a program to print numbers from 1 to 100 using while loop.

#include <stdio.h>
int main()
{
    int a;
    printf("Number from 1 to 100: \n");
    a = 1;
    while(a<=100)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}