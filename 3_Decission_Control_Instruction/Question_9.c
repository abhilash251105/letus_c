/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to
check if all the three points fall on one straight line.*/

/*Cheak three points are co-linear*/
#include <stdio.h>
#include <math.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    int s1, s2, s3;

    printf("\n Enter the value of x1 and y1 co-ordinates of first point:");
    scanf("%d %d", &x1, &y1);
    printf("\n Enter the value of x2 and y2 co-ordinates of first point:");
    scanf("%d %d", &x2, &y2);
    printf("\n Enter the value of x3 and y3 co-ordinates of first point:");
    scanf("%d %d", &x3, &y3);

    s1 = abs(x2 - x1) / abs(y2 - y1);
    s2 = abs(x3 - x1) / abs(y3 - y1);
    s3 = abs(x3 - x2) / abs(y3 - y2);

    if ((s1 == s2) && (s1 == s3))
        printf("point are colinear\n");
    else
        printf("point are not colinear\n");

    return 0;
}