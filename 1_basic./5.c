// ? 5) Write a Program to Find Size of int, float, double and char in your computer

#include <stdio.h>

int main()
{
    printf("size of int is %ld \n", sizeof(int));
    printf("size of char is %ld\n", sizeof(char));
    printf("size of float is %ld\n", sizeof(float));
    printf("size of double is %ld\n", sizeof(double));
    //* %ld for long unsigned int 
    return 0;
}