/*Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.*/

/*print hours of the day with suitable suffixes*/
#include <stdio.h>

int main()
{
    int hour;
    for (hour = 0; hour <= 23; hour++)
    {
        if (hour == 0)
        {
            printf("12 midnight\n");
            continue;
        }
        if (hour < 12)
            printf("%dAM\n", hour);

        if (hour < 12)
            printf("12Noon\n");

        if (hour < 12)
            printf("%dPM\n", hour % 12);
    }

    return 0;
}