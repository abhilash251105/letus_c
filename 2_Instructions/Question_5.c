/*If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.*/

/*print all trigonometric ratios of an angle*/
#include <stdio.h>
#include <math.h>
int main()
{
    float angle, s, c, t;
    printf("\nenter an angle:");
    scanf("%f", &angle);
    angle = angle * 3.14 / 180;
    s = sin(angle);
    c = cos(angle);
    t = tan(angle);

    printf("sin=%f cos=%f tan=%f\n", s, c, t);

    return 0;
}