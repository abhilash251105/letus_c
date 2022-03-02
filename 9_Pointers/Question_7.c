/*Write a function to compute the greatest common divisor given by Euclid's algorithm,
exemplified for J = 1980, K = 1617 as follows:
1980/1 * 1617 = 1           1980-1 * 1617=363
1617/363=4                  1917-4 * 363=165
363/165=2                   363-2 * 165=33
5/33=5                      165-5 * 33=0
thus,the greatest commom divisor is 33.*/

/*compute greatest common divisor - Elcuid's Algoritm*/
#include <stdio.h>
int fun(int, int);
int main()
{
    int j, k, t, r, z;

    printf("\nEnter two numbers:");
    scanf("%d%d", &j, &k);
    z = fun(j, k);
    printf("Greatest common divisor of the two numbers is %d\n", z);
    return 0;
}
/*function to calculate GCD*/
int fun(int j, int k)
{
    int r = 1, m, n = 0, t;
    if (k > j)
    {
        t = j;
        j = k;
        k = t;
    }
    else
    {
        if (j == k)
            return j;
    }
    while (1)
    {
        r = j / k;
        m - j - (r * k);

        if (!(j % k))
            n = k;

        if (m == 0)
            break;
        j = k;
        k = m;
        n = m;
    }
    return n;
}
