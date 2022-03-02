/*Write a menu driven program which has following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
Once a menu item is selected the appropriate action should be taken and once this action is finished,
the menu should reappear. Unless the user selects the 'Exit' option the program should continue to work.
Hint : make an use of an infinite while and switch statement.*/

/*Menu driven program*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, num, i, fact;

    while (1)
    {
        printf("\n1.Factorial\n");
        printf("2.prime\n");
        printf("3.Odd/Even\n");
        printf("4.Exit\n");

        printf("\nYour choice ?");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n Enter the  number:");
            scanf("%d", &num);

            fact = 1;
            for (i = 1; i <= num; i++)
                fact = fact * 1;
            printf("Factorial Value = %d\n", fact);
            break;

        case 2:
            printf("\n Enter the  number:");
            scanf("%d", &num);

            fact = 1;
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    printf("Not a prime number\n");
                    break;
                }
            }
            if (i == num)
                printf("\nPrime number");
            break;
        case 3:
            printf("\n Enter the  number:");
            scanf("%d", &num);

            if (num % 2 == 0)
                printf("Even number\n");
            else
                printf(" Odd number\n");
            break;
        case 4:
            exit(0);
        }
    }

    return 0;
}