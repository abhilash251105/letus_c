/*(a) Using conditional operator determine:
(2)Whether the character enter through keyboard is a special symbol or not*/

/*Determine whether a character is a special symbol*/
#include <stdio.h>

int main()
{
    char ch;

    printf("\nEnter character:");
    scanf("%c", &ch);
    ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) ||
     (ch >= 91 && ch <= 96) || (ch >= 123))
        ? printf("Character entered is a special symbol\n")
        : printf("Character entered is not a special symbol\n");
    return 0;
}