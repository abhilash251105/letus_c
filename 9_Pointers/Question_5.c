/*If the lengths of the sides of a triangle are denoted by a, b, and c, then area of triangle is given by
area=√√S(S-a)(S−b)(S — c)
where, S = (a + b + c) / 2. Write a function to calculate the area of the triangle.*/

/*Area of the triangle with sides a,b & c*/
#include <stdio.h>
#include <math.h>
float area(float a, float b, float c);
int main()
{
    float a, b, c, z;

    printf("\nEnter three sides of the triangle:");
    scanf("%f%f%f", &a, &b, &c);
    z = area(a, b, c);
    printf("\n\narea of the triangle =%f\n", z);
    return 0;
}
/*function to calculate area from a formula*/
float area(float a, float b, float c)
{
    float s, m, x;
    s = (a + b + c) / 2;
    m = s * (s - a) * (s - b) * (s - c);
    x = sqrt(m);
    return (x);
}