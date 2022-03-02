/*A 5 digit positive integer is entered through the keyboard write a recursive and non recursive function
to calculate sum of digit of the 5 digit number.*/

/*Calculate sum of digit of a five-digit number with/without recursion*/
#include <stdio.h>
int sum(int);
int rsum(int);
int main()
{
    int s, rs;
    int n;

    printf("Enter number:");
    scanf("%d", &n);

    s = sum(n);
    printf("sum digit without using recursion is%d\n", s);
    rs = rsum(n);
    printf("sum of digits using recursing is %d\n", rs);
    return 0;
}
int sum(int num)
{
    int remainder, sum = 0;

    while (num > 0)
    {
        remainder = num % 10;
        sum = sum = remainder;
        num = num / 10;
    }
    return (sum);
}
int rsum(int num)
{
    int sum = 0;
    int remainder;

    if (num != 0)
    {
        remainder = num % 10;
        sum = remainder + rsum(num / 10);
    }
    return sum;
}
