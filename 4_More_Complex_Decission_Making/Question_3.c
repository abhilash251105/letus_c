/*If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is valid or not. 
The triangle is valid if the sum of two sides is greater than the largest of the three sides.*/

/* cheak wheather a triangle valid or not*/
#include <stdio.h>

int main()
{
    int s1, s2, s3, ls, sum;
    printf("\nenter three side of triangle:");
    scanf("%d %d %d", &s1, &s2, &s3);
    if (s1 > s2)
    {
        if (s1 > s3)
        {
            sum = s2 + s3;
            ls = s1;
        }
        else
        {
            sum = s1 + s2;
            ls = s3;
        }
    }
    else
    {
        if (s2 > s3)
        {
            sum = s1 + s2;
            ls = s2;
        }
        else
        {
            sum = s1 + s2;
            ls = s3;
        }
    }
    if (sum > ls)
        printf("the triangle is valid triangle\n");
    else
        printf("the triangle is invalid triangle\n");
    return 0;
}