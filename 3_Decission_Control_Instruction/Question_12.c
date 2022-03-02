/*According to Gregorian calendar, it was Monday on the date 01/01/01. 
If any year is input through the keyboard write a program to 
find out what is the day on 1¹ January of this year.*/

/*Calculate the day on forst january of any year*/
#include <stdio.h>

int main()
{
    int ld, fd, yr;
    long int nd, td;

    printf("\nEnter the year:");
    scanf("%d", &yr);
    nd = (yr - 1) * 365L;
    ld = (yr - 1) / 4 - (yr - 1) / 100 + (yr - 1) / 400;
    td = nd + ld;
    fd = td % 7;

    if (fd == 0)
        printf("mon\n");

    if (fd == 1)
        printf("tues\n");

    if (fd == 2)
        printf("wed\n");

    if (fd == 3)
        printf("thru\n");

    if (fd == 4)
        printf("fri\n");

    if (fd == 5)
        printf("sat\n");

    if (fd == 6)
        printf("sun\n");

    return 0;
}