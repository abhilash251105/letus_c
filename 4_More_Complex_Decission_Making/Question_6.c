/*In boxing the weight class of a boxer is decided as per the following table.
Write a program that receives weight as input and prints out the boxer's weight class.

Boxer class                                Weight in pounds
Fly weight class                                 <115
Bantamweightclass                               115-121
Featherweight class                              122-153
Middleweight class                               154-189
Heavyweight class                                >=190*/

/*Decide Boxer class based on his weight*/
#include <stdio.h>

int main()
{
    int wt;
    printf("\nEnter the weight in pounds:");
    scanf("%d", &wt);
    if (wt < 115)
        printf("Fly weight class\n");
    if (wt >= 115 && wt <= 121)
        printf("Bantamweightclass\n");
    if (wt >= 122 && wt <= 153)
        printf("Featherweight class\n");
    if (wt >= 154 && wt <= 189)
        printf("Middleweight class\n");
    if (wt >= 190)
        printf("Heavyweight class   ");

    return 0;
}