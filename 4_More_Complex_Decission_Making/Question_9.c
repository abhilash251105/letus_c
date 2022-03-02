/*The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms) to 
the square of the height (in meters). Write a program that receives weight and height, calculates 
the BMI, and reports the BMI category as per the following table:
BMI category                    BMI
Starvation                      <15
Anorexic                        15.1-17.5
Underweight                     17.6-18.5
Ideal                           18.6-24.9
OverWeight                      25-25.9   
Obese                           30-30.9
Morbidly Obese                  >=40*/

/*Determine BMI category*/
#include <stdio.h>

int main()
{
    float wt, ht, bmi;

    printf("\nEnter in weight in kg and height in meters:");
    scanf("%f %f", &wt, &ht);
    bmi = wt / (ht * ht);
    printf("Body mass index = %f\n", bmi);
    if (bmi < 15)
        printf("BMI category : Starvation\n");
    else if (bmi < 17.5)
        printf("BMI category : Anorexic\n");
    else if (bmi < 18.5)
        printf("BMI category : Underweight\n");
    else if (bmi < 25)
        printf("BMI category : Ideal \n");
    else if (bmi < 30)
        printf("BMI category : OverWeight \n");
    else if (bmi < 40)
        printf("BMI category : Obese \n");
    else
        printf("BMI category : Morbidly Obese \n");

    return 0;
}