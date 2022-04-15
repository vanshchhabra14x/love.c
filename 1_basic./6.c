//? 6) Write a Program to Swap Two Numbers

#include <stdio.h>

int main()
{
    int a = 3, b = 5, temp;

    printf("a = %d and b = %d \n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    // temp = a;
    // a = b;
    // b = temp;
    printf("a = %d and b = %d \n", a, b);
    return 0;
}