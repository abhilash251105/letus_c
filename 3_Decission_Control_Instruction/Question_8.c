/*Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.*/

/*Find whether area of rectangle is greater than its perimeter*/
#include <stdio.h>

int main()
{
    int l, b, area, peri;

    printf("\nEnter the length and breadth of the rectangle;");
    scanf("%d %d", &l, &b);

    area = l * b;
    peri = 2 * (l + b);
    if (area > peri)
        printf("area is greater than perimeter\n");
    else
        printf("area is less than perimeter\n");

    return 0;
}