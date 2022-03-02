/*A positive integer is entered through the keyboard,write a program to obtain the prime factors of the number.
Modify the functionn suitanly to obtain the prime factors recursively.*/

/*Find prime factor of a number recursively*/
#include <stdio.h>
void factor(int);
int main()
{
    int num;

    printf("Enter a number");
    scanf("%d", &num);

    printf("prime factors are:");
    factor(num);
    return 0;
}
void factor(int n)
{
    static int i = 2;

    if (i < n)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            n =n / i;
        }
        else
            i++;

        factor(n);
    }
    return;
}