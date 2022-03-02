/*(a) Using conditional operator determine:
(1) Whether the character enter through the keyboard is alower case alphabet or not.*/

/*Determine character case using conditional operator*/
#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter the character:");
    scanf("%c", &ch);
    ch >= 97 && ch <= 122 ? printf("Character is entered is lower case\n") : printf("Character entered is not lower case\n");

    return 0;
}