//? 2) Write a Program to Find Factorial of a given number N
//? (N is entered by user)

#include <stdio.h>

int main()
{
    int num, fact = 1;

    printf("Enter the value for factorial of  n numbers :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial  of n(%d) number is %d ", num, fact);
    return 0;
}