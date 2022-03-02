/*Write a program to find the absolute value of a number entered through the keyboard.*/

/*To find absolute value of number enter through keyboard*/

#include <stdio.h>

int main()
{
    int no;

    printf("\nenter any number;");
    scanf("%d", &no);
    if (no < 0)
        no = no * -1;

    printf("the absolute value of given number  is%d\n", no);

    return 0;
}