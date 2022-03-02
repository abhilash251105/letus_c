/*Write aprogram to print all prime numbers from 1 to 300.
Hint: Use nested loop ,break and continue*/

/*Generatre all prime numbers from 1 to 300*/
#include <stdio.h>

int main()
{
    int i, n = 1;
    printf("\nprime numbers between 1 and 300 are:\n1\t");
    while (n <= 300)
    {
        i = 2;
        while (i < n)
        {
            if (n % i == 0)
                break;

            else
                i++;
        }
        if (i == n)
            printf("%d\t", n);
        n++;
    }
    return 0;
}