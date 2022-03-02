/*Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the number of subjects he has failed in.
Use the following logic:

-If the student gets first class and the number of subjects he failed in is greater than 3,
then he does not get any grace. Otherwise the grace is of 5 marks per subject.

-If the student gets second class and the number of subjects he failed in is greater than 2,
then he does not get any grace. Otherwise the grace is of 4 marks per subject.

-If the student gets third class and the number of subjects he failed in is greater than 1,
then he does not get any grace. Otherwise the grace is of 5 marks.*/

/*Determine the  grace marks obtain by the student*/
#include <stdio.h>

int main()
{
    int c, sub;

    printf("\nEnter the class and number of subjects failed:");
    scanf("%d %d", &c, &sub);

    switch (c)
    {
    case 1:
        if (sub <= 3)
            printf("student gets total of the %d grace marks\n", 5 * sub);
        else
            printf("\nNo grace marks");

        break;
    case 2:
        if (sub <= 2)
            printf("student gets total of the %d grace marks\n", 4 * sub);
        else
            printf("\nNo grace marks");

        break;
    case 3:
        if (sub == 3)
            printf("student gets total of the %d grace marks\n");
        else
            printf("\nNo grace marks");

        break;
    default:
        printf("Worng class entered\n");
    }
    return 0;
}