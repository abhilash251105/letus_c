/*Write a program to check whether a triangle is valid or not, when the three angles 
of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees.*/

/*Cheak whether a tringele is valid or not*/
#include <stdio.h>

int main()
{
    float angle1, angle2, angle3;

    printf("\nEnter the three angle of triangle:");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if ((angle1 + angle2 + angle3) == 180)
        printf("the triangle is valid triangle\n");
    else
        printf("the tringle is an invalid triangle\n");

    return 0;
}