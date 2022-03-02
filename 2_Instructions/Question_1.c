/*If five digit number is input through the keyboard, write a program to calculate  the sum 
of its digits. (Hint: Use the modulus operator '%')*/



/*sum of digits of five digit number*/
#include <stdio.h>

int main()
{
    int num, a, n;
    int sum = 0;
    printf("\nenter the 5 digit number:");
    scanf("%d", &num);

    a = num % 10;
    n = num / 10;
    sum = sum + a;

    a = n % 10;
    n = n / 10;
    sum = sum + a;

    a = n % 10;
    n = n / 10;
    sum = sum + a;

    a = n % 10;
    n = n / 10;
    sum = sum + a;

    a = n % 10;
    sum = sum + a;

    printf("the sum of the five digit number%d is %d \n", num, sum);
    return 0;
}