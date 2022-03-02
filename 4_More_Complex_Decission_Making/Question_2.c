/*If a character is entered through the keyboard, write a program to determine whether the character is a capital letter, 
a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various characters:*/

/*Characters           ASCII value
A-Z                   65-90
a-z                   97-122
0-9                   48-57
special symbol        0-47,58-64,91-96,123-127*/

/*Cheak type of character enter from the key board*/
#include <stdio.h>

int main()
{
    char ch;
    printf("\nenter a character from the keyboard:");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        printf("the character is an upper case letter\n");

    if (ch >= 97 && ch <= 122)
        printf("the character is an lower case letter\n");

    if (ch >= 48 && ch <= 57)
        printf("the character is a digit\n");

    if ((ch >= 0 && ch <= 48) || (ch >= 57 && ch <= 65) || (ch >= 90 && ch <= 97) || ch > 122)

        printf("the character is a special symbol\n");

    return 0;
}