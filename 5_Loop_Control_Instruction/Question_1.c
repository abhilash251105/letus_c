/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. 
Assume that employees do not work for fractional part of an hour.*/

/*Determine overtime pay of ten employees*/
#include <stdio.h>

int main()
{
    float otpay;
    int hour, i = 1;
    while (i <= 10)
    {
        printf("\nEnter number of hours worked: ");
        scanf("%d", &hour);
        if (hour >= 40)
        {
            otpay = (hour - 40) * 12;
            printf("No of hours worked = %d\n overtome pay =Rs.%f\n", hour, otpay);
        }
        else
        {
            otpay = 0;
            printf("No of hour worked(%d)is less than 40Hrs.\nHence No overtime pay\n", hour);
        }
        i++;
    }
    return 0;
}