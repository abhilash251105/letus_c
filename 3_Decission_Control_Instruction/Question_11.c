/*Given a point (x, y), write a program to find out if it lies on the X axis, Y-axis or on the origin.*/

/*Determine  position of a point wrt XandY axis*/
#include <stdio.h>

int main()
{
    int x, y;

    printf("\nEnter the value of x and y:");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
        printf("point lies on the origin\n");
    else if (x == 0 && y != 0)
        printf("point lies on the y axis\n");
    else if (x != 0 && y == 0)
        printf(" point lies on the x axis\n");
    else
        printf("point neither lise on any axis, nor origin\n");
    return 0;
}