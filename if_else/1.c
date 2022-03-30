//! Write a Program to Check Whether Number is Even or Odd
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number :");
    scanf("%d", &num);
if (num%2==0)
{
    printf("even ");
}
else
{
    printf("odd ");
}

    return 0;
}