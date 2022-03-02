/*A positive integer is enterd through the keyboard, write a function to find the
binary equivalant of this number:
(1)without using recursion
(2)using recursion*/

/*Binary Equvalant of a decimal number*/
#include <stdio.h>
int binary(int);
int main()
{
    int num;

    printf("\nEnter the number:");
    scanf("%d", num);

    binary(num);
    return 0;
}
/*function to call decimal to binary*/
int binary(int n)
{
    int r;

    r = n % 2;
    n = n / 2;
    if (n == 0)
    {
        printf("\nThe binary equvalent is %d", r);
        return (r);
    }

    else
        binary(n);
    printf("%d", r);
}