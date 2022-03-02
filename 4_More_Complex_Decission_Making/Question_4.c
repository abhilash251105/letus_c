/*A certain grade of steel is graded according to the following
(i) Hardness must be greater than 50 
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met 
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of hardness, 
carbon content and tensile strength of the steel under consideration and output the grade of the steel.*/

/*Cheak the grade of steel*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float hard, carbon, tensile;
    printf("\nEnter the hardness of the steel:");
    scanf("%f", &hard);

    printf("\nEnter carbon centent:");
    scanf("%f", &carbon);

    printf("\nEnter tensile strength:");
    scanf("%f", &tensile);

    if (hard > 50 && carbon < 0.7 && tensile > 5600)
    {
        printf("Gread 10\n");
        exit(0);
    }
    if (hard > 50 && carbon < 0.7 && tensile <= 5600)
    {
        printf("Gread 9\n");
        exit(0);
    }
    if (hard <= 50 && carbon < 0.7 && tensile > 5600)
    {
        printf("Gread 8\n");
        exit(0);
    }
    if (hard > 50 && carbon >= 0.7 && tensile > 5600)
    {
        printf("Gread 7\n");
        exit(0);
    }
    if (hard > 50 || carbon < 0.7 || tensile > 5600)
    {
        printf("Gread 6\n");
        exit(0);
    }

    printf("Gread 5\n");

    return 0;
}