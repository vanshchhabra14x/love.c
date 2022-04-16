//? 4) Write a Program to Display Fibonacci Series upto nth
//?  term (n is entered by user)

#include <stdio.h>

int main()
{
    int num, n1 = 0, n2 = 1, n3;
    printf("Enter the  nth term for fibonacci series  :");
    scanf("%d", &num);
        printf(" %d %d", n1,n2);

    for (int i = 0; i < num-2; i++)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }

    return 0;
}