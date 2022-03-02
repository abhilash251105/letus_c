/*Given the coordinates (x, y) of center of a circle and its radius, 
write a program that will determine whether a point lies inside the circle, 
on the circle or outside the circle. (Hint: Use sqrt() and pow() functions)*/

/*Determine the position of point with respec to acirclr*/
/*The center of the circle has been assumed to be at (0,0)*/
#include <stdio.h>

int main()
{
    int x, y, r;
    int dis, d;

    printf("\n Enter the radious of the circle and cooridinates of point (x,y):");
    scanf("%d %d %d", &r, &x, &y);

    dis = x * x + y * y;
    d = r * r;

    if (dis == d)
        printf("point is on the circle\n");
    else
    {
        if (dis > d)
            printf("point is out side the circle\n");
        else
            printf("point is inside the circle\n");
    }

    return 0;
}