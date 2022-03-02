/*Write a function to calculate the factorial value of any integer entered through the keyboard*/

/*calculate factorial  value of an integer using a function*/
#include <stdio.h>

long fact(int);

int main()
{
    int num;
    long factorial;

    printf("\nEnter a number");
    scanf("%d", &num);

    factorial = fact(num);
    printf("Factorial of %d = %d\n", num, factorial);
    return 0;
}
long fact(int num)
{
    int i;
    long factorial = 1;

    for (i = 1; i <= num; i++)
        factorial = factorial * i;
    return (factorial);
}