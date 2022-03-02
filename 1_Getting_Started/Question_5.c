/*      */

/*Calculation of perimter and area of rectangle and circle*/
#include <stdio.h>

int main()
{
    int l, b, r, area1, perimeter;
    float area2, circum;

    printf("\nenter length and breadth of rectangle:");
    scanf("%d %d", &l, &b);
    area1 = l * b;
    perimeter = 2 * l + 2 * b;
    printf("area of the rectangle =%d\n", area1);
    printf("perimeterof the rectangle=%d\n", perimeter);

    printf("\n\nenter the radious of the circle:");
    scanf("%d", &r);

    area2 = 3.14 * r * r;
    circum = 2 * 3.14 * r * r;
    printf("area of the circle =%f\n", area2);
    printf("circumference of the circle=%f\n", circum);

    return 0;
}