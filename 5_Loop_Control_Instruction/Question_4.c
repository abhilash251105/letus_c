/*Write a program to print all the ASCIl values and their equivalent characters using a while loop. 
The ASCII values vary from 0 to 255.*/

/*print ASCII values and there corresponding characters*/
#include <stdio.h>

int main()
{
    int i = 0;

    while (i <= 255)
    {
        printf("%d %c\n", i, i);
        i++;
    }

    return 0;
}