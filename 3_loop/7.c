//? 7) Write a Program to Find LCM of two numbers entered
//? by user
#include <stdio.h>
int main()
{
    int n1, n2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2); // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;
    do
    {

        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("LCM= %d", max);
            break;
        }
        else
            ++max;
    } while (1);
    return 0;
}