/*Write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function from main() and print the results in main().*/

/*Function which returns sum, average and standard deviation.*/
#include <stdio.h>
#include <math.h>
void function(int *, int *, double *);
int main()
{
    int sum, avg;
    double stdev;

    function(&sum, &avg, &stdev);
    printf("sum =%d\n average =%d\n standard deviation= %f\n", sum, avg, stdev);

    return 0;
}
void function(int *sum, int *avg, double *stdev)
{
    int n1, n2, n3, n4, n5;

    printf("\nEnter five numbers:");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    *sum = n1 + n2 + n3 + n4 + n5;
    *avg = *sum / 5;
    /*calculate standard deviation*/

    *stdev = sqrt((pow((n1 - *avg), 2) + pow((n2 - *avg), 2) + pow((n3 - *avg), 2) + ((n4 - *avg), 2) + pow((n5 - *avg), 2)) / 4);
}