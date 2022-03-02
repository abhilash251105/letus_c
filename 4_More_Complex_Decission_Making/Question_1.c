/*A year is entered through the keyboard, 
write a program to determine whether the year is leap or not. Use the logical operators && and ||.*/

/*Determine whether a year a leap or not*/
#include <stdio.h>

int main()
{
    int year;

    printf("\nEnter year:");
    scanf("%d", &year);

    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");
    return 0;
}
