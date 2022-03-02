/*Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the
computer always wins, Rules for the game are as follows:
There are 21 matchsticks.
The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
After the person picks, the computer does its picking.
Whoever is forced to pick up the last matchstick loses the game.*/

/*match stick game*/
#include <stdio.h>

int main()
{
    int m = 21, p, c;
    while (1)
    {
        printf("\n\nNo of matches left =%d\n", m);
        printf("pick up 1,2,3 or 4 matches:");
        scanf("%d", &p);

        if (p > 4 || p < 1)
            continue;

        m = m - p;
        printf("no of matches left =aa5%d\n", m);

        c = 5 - p;
        printf("Out of which computer picked up%d\n", c);

        m = m - c;
        if (m == 1)
        {
            printf("numbr of matches left\n\n", m);
            printf("you lost the game!!\n");
            break;
        }
    }

    return 0;
}