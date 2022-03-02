/* Write a program to receive Cartesian co-oridinates (x,y) of a point and 
convert them into polar co-ordinates(r, ).
Hint: r= sqrt(x*x+y*y) and =tan -1(y/x)*/
/*convert cartesian co-ordinates to polar co ordinates*/

#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, theta;

    printf("\nEnter x and y co-ordinates:");
    scanf("%f %f", &x, &y);
    r = sqrt(x * x + y * y);
    theta = atan2(y, x);
    theta = theta * 180 / 3.14;
    printf("r=%f theta=%f", r, theta);

    return 0;
}