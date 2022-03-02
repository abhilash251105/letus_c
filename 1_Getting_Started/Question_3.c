/*If the mark obtained by a student in five different subjects are input throug the keyboard,
Write a program to find out the aggregate marks and percentage  marks obtained by the student.
Assume that the maximum mark that can be obtain by a student in each subject is 100*/

/*Calculation of aggregate and percentage mark*/
#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, aggr;
    float per;
    printf("\nEnter marks in five subjects:");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    aggr = m1 + m2 + m3 + m4 + m5;
    per = aggr / 5;

    printf("Aggregate mark =%d\n", aggr);
    printf("Percentage mark =%f\n", per);

    return 0;
}