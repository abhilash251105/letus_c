/*Write a function that receives marks obtained by a student in 3 subjects and returns the average and
percentage of these marks. Call this function from main() and print the results in main()*/

/*Function which return average and percentage*/
#include <stdio.h>
void result(int, int, int, float *, float *);
int main()
{
    float avg, per;
    int m1, m2, m3;
    printf("\nEnter marks of the three subject:");
    scanf("%d%d%d", &m1, &m2, &m3);
    result(m1, m2, m3, &avg, &per);
    printf("avrage=%f\n Percentage=%f\n", avg, per);
    return 0;
}
void result(int m1, int m2, int m3, float *a, float *p)
{
    *p = *a = (m1 + m2 + m3) / 3.0f;
}