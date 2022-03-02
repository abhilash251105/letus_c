/*Ramesh basic salary is input thgrough the keyboard.His dearness allowance is 40% of basic salary, 
and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.*/

/*Calculate Ramesh gross salary*/
#include <stdio.h>

int main()
{
    float bp, da, hra, grpay;
    printf("\nEnter the basic salary of Ramesh:");
    scanf("%f", &bp);
    da = 4.0 * bp;
    hra = 0.2 * bp;
    grpay = bp + da + hra;
    printf("Basic salary of Ramesh = %f\n", bp);
    printf("Dearness allowance = %f\n", da);
    printf("House rent allowance = %f\n", hra);
    printf("Gross pay of Ramesh = %f\n", grpay);

    return 0;
}