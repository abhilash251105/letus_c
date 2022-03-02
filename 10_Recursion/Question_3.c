/*Write a recursive function to obtain the first 25 numbers of a Fibonacci sequence.
In a Fibonacci sequence the sum of two sucessive term gives the  third term. Following are the first few term
of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89 ....... */

/*Generate first 25 terms of a fibonacci sequence*/
#include <stdio.h>
void fibo(int, int);
int main()
{
    int i, t, old, current = 1, new;

    printf("%d\t%d\t", old, current);
    fibo(old, current);
    return 0;
}

void fibo(int old, int current)
{
    static int terms = 2;
    int new;

    if (terms < 20)
    {
        new = old + current;

        printf("%d\t", new);
        terms = terms + 1;
        fibo(current, new);
    }
    else
        return;
}