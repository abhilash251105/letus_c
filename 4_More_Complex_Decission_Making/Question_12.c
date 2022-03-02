/*Write a program using conditional operators to determine 
whether a year enter through the keyboard is a leap year or not.*/

/*Determine whether a year is leap year or not using conditional operators*/
#include <stdio.h>

int main()
{
    int year;

    printf("\nEnter year:");
        scanf("%d", &year);
    year % 100 == 0 ? (year % 400 == 0 ? printf("Leap year\n") : printf("Not a leap year\n")) : (year % 4 == 0 ? printf("Leap year\n") : printf("Not a leap year\n"));

    return 0;
}