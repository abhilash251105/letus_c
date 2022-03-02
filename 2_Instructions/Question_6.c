/*Two numbers are input through the keyboard into two locations C and D. 
Write a program to interchange the contents of C and D.*/

/*interchanging of context of two variable c & d*/
#include <stdio.h>

int main()
{
    int c, d, e;

    printf("\nenter the number location at C:");
    scanf("%d", c);
    printf("\nenter the number location at D:");
    scanf("%d", d);

    e = c;
    c = d;
    d = e;

    printf("New number at location at C=%d\n", c);
    printf("New number at location at D=%d\n", d);

    return 0;
}