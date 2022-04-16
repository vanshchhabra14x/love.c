//? 3) Write a Program to Generate Multiplication Table of a
//? number (entered by the user) using a for loop.

#include <stdio.h>

int main()
{
    int num, mul;

     printf("Which table you wanna print? :");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        mul = i * num;
        printf("%d * %d = %d \n",num,i,mul);
    }

    return 0;
}