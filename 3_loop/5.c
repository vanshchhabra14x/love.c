// ?5) Write a Program to Display Fibonacci Series upto
//? certain number n (n is entered by user)
//? Example: n=100
//? Output:
//? Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,

#include <stdio.h>

int main()
{
    int num, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the  nth term for fibonacci series  :");
    scanf("%d", &num);
    printf(" %d %d", t1, t2);

    nextTerm = t1 + t2;
    while (nextTerm <= num)
    {
        printf("%d ",nextTerm); 
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
}

            return 0;
    }