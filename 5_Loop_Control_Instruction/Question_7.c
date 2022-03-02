/* Write a program to enter numbers till the user wants.
At the end it should display the count of positive, negative and zeros entered.*/

/*count number of positives, negetives and zeros*/
#include <stdio.h>

int main()
{
    int pos, neg, zero, num;
    char ans = 'y';

    pos = neg = zero = 0;
    while (ans == 'y')
    {
        printf("\nEnter a number:");
        scanf("%d", &num);

        if (num == 0)
            zero++;
        if (num > 0)
            pos++;
        if (num < 0)
            neg++;
        fflush(stdin);
        printf("Do you want to  continue?\n");
        scanf("%C", &ans);
    }

    printf("You entered %d positive number(s)\n", pos);
    printf("You entered %d negetive number(s)\n", neg);
    printf("You entered %d zero(s)\n", zero);

    return 0;
}