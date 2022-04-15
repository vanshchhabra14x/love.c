//? 2) Write a Program to Check Whether a Character is Vowel or Consonant.
#include<stdio.h>

    int main(){
    char char1;
    printf("Enter a character ");
    scanf("%c",&char1);

    if (char1 == 'a' || char1 =='e' || char1 =='i'||char1 =='o' || char1 == 'u' || char1 == 'A'|| char1 =='E' || char1 =='I'||char1 =='O' || char1 == 'U' )

    {
 printf("Character %c is vowel",char1);
    }
    else
    {
    printf("character is consonant");
    }
    
    
    return 0;
}