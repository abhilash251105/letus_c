/*Write a program produce following output:
         A B C D E F G F E D C B A
         A B C D E F   F E D C B A
         A B C D E       E D C B A
         A B C D           D C B A
         A B C               C B A
         A B                   B A
         A                       A*/

/*produce the given pattern*/

#include <stdio.h>

int main()
{
    int i, x, blanks, j, val, k;
    blanks = 0;
    x = 71;
    i = 1;
    while (i <= 7)
    {
        j = 65;
        val = x;
        while (j <= val)
        {
            printf("%c", j);
            j++;
        }
        if (i == 1)
            val--;

        k = 1;

        while (k <= blanks)
        {
            printf("");
            k++;
        }
        blanks = 2 * i - 1;

        while (val >= 65)
        {
            printf("%c", val);
            val--;
        }
        printf("\n");
        i++;
    }

    return 0;
}