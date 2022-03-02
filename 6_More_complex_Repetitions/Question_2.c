/*Write a program to fill the entire screen with a smiling face.
the smilling face has an ASCII value 1.*/

/*fill entire screen with smiling face*/
#include <stdio.h>

int main()
{
    int r, c;

    for (r = 0; r <= 24; r++)
        for (c = 0; c <= 79; c++)
            printf("%c",1);

    return 0;
}