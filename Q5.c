// Q5. Write a c program to print odd number from 1 to 100

#include<stdio.h>
int main()
{
    int a = 1;
    printf("Here are the numbers: \n");
    while(a <= 100)
    {
        if(a%2 == 1 )
        {
        printf("%d\n", a);
        }
        a++;
    }
    return 0;
}
