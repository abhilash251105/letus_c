/*a machine is purchased which will produce earning of Rs.1000 per year while it lasts.
the machine cost Rs. 6000 and will have a salvage value od Rs. 2000 when it is condemned.
if 9 percent annum can be earned on alternate investments, Write a program to determine what will be the
minimum life of the machine to make it a more attractive investment compaire to alternative investment ?*/

/*Determine minimum life of the mechine*/

#include <stdio.h>

int main()
{
    int year = 1;
    float principal = 6000, slavegevalue = 2000, yearlyprofit = 1000;
    float valuepoint1, valuepoint2, interest,true;

    while (true)
    {
        valuepoint1 = slavegevalue + yearlyprofit * year;
        interest = principal * 0.09f * year;
        valuepoint2 = principal + interest;
        printf("year =%2d value option one = %10.2f value option 2= %10.2f\n",year, valuepoint1, valuepoint2);

        if (valuepoint1 > valuepoint2)
            break;

        year++;
    }
    printf("minimum life of the machine is %d year\n", year - 1);

    return 0;
}