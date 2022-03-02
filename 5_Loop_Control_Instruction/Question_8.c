/*Write a program to receive an integer and find its octal equivalent.
(Hint: To obtain octal equivalent of an integer,
divide it continuously by 8 till dividend doesn't become zero,
then write the remainders obtained in reverse direction.)*/

/*Fine octal Equivalent of a number*/
#include <stdio.h>
#include<math.h>
int main()
{
    int n1, n2, rem, oct, p;

    printf("\nEnter any number:");
    scanf("%d", &n1);

    n2 = n1;
    p = oct = 0;

    while (n1 > 0)
    {
        rem = n1 % 8;
        n1 = n1 / 8;
        oct = oct + rem * pow(10, p);
        p++;
    }
    printf("the octal equvalant of %d is %d\n", n2, oct);

    return 0;
}