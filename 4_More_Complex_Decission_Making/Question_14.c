/*Write a program to receive value of an angle in degrees and cheak  whether sum of squres of sine and cosine
of this angle is equal to 1.*/

/*Determine whether  sum of squares of sine and cosine of an angle is equal to 1*/
#include <stdio.h>
#include <math.h>
int main()
{
    int angle, sum;
    printf("\nEnter angles in degrees:");
    scanf("%d", &angle);
    angle = angle * 3.14 / 180;
    sum = pow(sin(angle),2) + pow(cos(angle),2);
    if (sum == 1)
        printf("sum of squres of sine and cosine is equal to 1\n");
    else
        printf("sum of squre of sine and cosine is not equal to 1\n");
    return 0;
}//***********************