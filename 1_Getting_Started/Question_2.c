/*Distance between two cities (in km.) is inout through keyboard. Write a program to 
convert the print this distance in meters, feet, inches and Centimeters.*/

/*Conversion of distance*/
#include <stdio.h>

int main()
{
    float km, m, cm, ft, inch;
    printf("\nEnter the distance in km:");
    scanf("%f", &km);
    m = km * 1000;
    cm = m * 100;
    inch = cm / 2.54;
    ft = inch / 12;
    printf("Distance in meters = %f\n", m);
    printf("Distance in centimeter = %f\n", cm);
    printf("Distance in inches = %f\n", inch);
    printf("Distance in feet = %f\n", ft);
    return 0;
}