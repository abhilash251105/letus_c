/*Write a function power (a,b), to calculate the value of a rised to b.*/

/*Program to calculate powerof a value*/
#include <stdio.h>
long power(int, int);
int main()
{
    int x, y;
    long pow;

    printf("\nEnter two numbers:");
    scanf("%d %d", &x, &y);

    pow = power(x, y);
    printf("%d to the power %d = %d\n", x, y, pow);
    return 0;
}

long power(int x, int y)
{
    int i;
    long p = 1;

    for (i = 1; i <= y; i++)
        p = p * x;
    return (p);
}