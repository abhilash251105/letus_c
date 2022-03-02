/*Given three variables x, y, z write a function to circularly shift their values to right.
In other words if x = 5, y = 8, z = 10, after circular shift y = 5, z = 8, x =10. Call the function with
variables a, b, c to circularly shift values.*/

/*circular shifting of values*/
#include <stdio.h>
void fun(int, int, int);
int main()
{
    int x, y, z;
    printf("Enter the values of x,y,z:\n");
    scanf("%d%d%d", &x, &y, &z);
    printf("\nValues of x,y and z as entered:");
    printf("\nx=%d \ty=%d \tz=%d\n", x, y, z);
    fun(x, y, z);
    return 0;
}
/*Function to shift values x,y,& z*/
void fun(int x, int y, int z)
{
    int i, t;
    for (i = 0; i <= 2; i++)
    {
        t = z;
        z = y;
        y = x;
        x = t;
        printf("\n\nAfter right shifting of values %d time(s):\n", i + 1);
        printf("x=%d\ty=%d\tz=%d", x, y, z);
    }
}