/*Write a program add first seven terms of following series using for loop:
1/1! + 2/2! + 3/3! + ......*/

/*sum of first even terms of a series.*/
#include <stdio.h>

int main()
{
    int i = 1, j;
    float fact, sum = 0.0;

    while (i <= 7)
    {
        fact = 1.0;
        for (j = 1; j <= i; j++)
            fact = fact * j;

        sum = sum + i / fact;
        i++;
    }
    printf("sum of series = %f\n", sum);
    return 0;
}
