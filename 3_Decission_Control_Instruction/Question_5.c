/*If ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three.*/

/*Find the youngest among three friends */
#include <stdio.h>

int main()
{
    int r, s, a, young;

    printf(" enter the ages of rama syama and ajaya:");
    scanf("%d %d %d", &r, &s, &a);

    if (r < s)
    {
        if (r < a)
            young = r;
        else
            young = a;
    }
    else
    {
        if (s < a)
            young = s;
        else
            young = a;
    }
    printf("The youngest of ram(%d),shyam( %d) and ajaya(%d) is %d\n", r, s, a, young);

    return 0;
}