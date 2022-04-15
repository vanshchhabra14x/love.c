//? 1) Write a Program to Calculate Sum of first N Natural
//? Numbers (here value of N is Entered by user)

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the value for n :");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
printf("Sum of n(%d) number is %d",num,sum);
    return 0;
}