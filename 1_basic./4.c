/*? 4) Write a program where the user is asked to enter two
integers (divisor and dividend) and the quotient and the
remainder of their division is computed.(Both divisor and
dividend should be integers.) */

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter dividend:");
    scanf("%d", &a);
    printf("Enter divisor:");
    scanf("%d", &b);
    printf("quotient is %d \nremainder is %d" ,(a / b), (a % b));
    return 0;
}