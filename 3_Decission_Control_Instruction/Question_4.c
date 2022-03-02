/*A five-digit number is entered through the keyboard. Write a program to obtain the reversed number 
and to determine whether the original and reversed numbers are equal or not.*/

/*cheak whether a number and its reverse number are equal*/
#include <stdio.h>

int main()
{
    int n, a, b, num;
    long int revnum = 0;

    printf("\nEnter the five digit number:");
    scanf("%d", &n);

    num = n;
    a = n % 10;
    n = n / 10;
    revnum = revnum + a * 10000L; //5

    a = n % 10;
    n = n / 10;
    revnum = revnum + a * 1000; //4

    a = n % 10;
    n = n / 10;
    revnum = revnum + a * 100; //3

    a = n % 10;
    n = n / 10;
    revnum = revnum + a * 10; //2

    a = n % 10;
    revnum = revnum + a; //1

    if (revnum == num)
        printf("Given number and its reversed number are equal\n");
    else
        printf("Given number and its reversed number are not equal\n");

    return 0;
}