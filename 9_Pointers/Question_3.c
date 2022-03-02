/*Write a c function to evalute the series
sin(x)=x-(x*x*x/3!)+(x*x*x*x*x/5!)-(x*x*x*x*x*x*x/7!)+......
to five significant digits.*/

/*Evaluation of series*/
#include <stdio.h>
#include <math.h>
float numerator(float, int);
float denominator(int);
int main()
{
    float n, x, a, b, sum = 0;
    int i, j;

    printf("\n Enter the number x:");
    scanf("%f", &x);
    for (i = 1, j = 1; i <= 10; i++, j += 2)
    {
        a = numerator(x, j);
        b = denominator(j);
        n = a / b;
        (i % 2 == 0) ? sum = sum - n : (sum = sum + n);
    }
    printf("sum =%f\n", sum);
    return 0;
}
/*calculate power*/
float numerator(float y, int j)
{
    float k = 1;
    int m;
    for (m = 1; m <= j; m++)
        k *= y;
    return (k);
}
/*calculate factorial*/
float denominator(int j)
{
    int m;
    float h = 1;
    for (m = 1; m <= j; m++)
        h = h * m;

    return (h);
}