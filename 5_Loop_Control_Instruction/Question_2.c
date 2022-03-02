/*Write a program to find the factorial value of any number entered through the keyboard.*/

/*Calculation of factorial of any number*/
#include <stdio.h>

int main()
{
    int num, i = 1;
    unsigned long int fact = 1;
    printf("\nEnter any number (less than 34):");
    scanf("%d",&num);

    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of%d=%lu\n", num, fact);

    return 0;
}