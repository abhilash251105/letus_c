/*Temprature of a city in Fahrenheit degrees in input through the keyboard. Write a program 
to convert this temprature into Centigrade degree.*/

/* Conversion of temprature from fahrenheit to Centigrade*/

#include <stdio.h>

int main()
{
    float fr, cent;
    printf("Enter the temprature (f):\n");
    scanf("%f", &fr);

    cent = 5.5 / 9.0 * (fr - 32);
    printf("temprature in centigrade =%f\n", cent);
    return 0;
}