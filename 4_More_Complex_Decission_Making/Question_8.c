/*Write a program that receives month and DOB as input and print the corresponding
Zodizc sign based on the following table
Zodiac sign       from- to

capricorn         december 22 - january 19
Aquarius          january 20 - february 17
pisces            february 18 - march 19
aries             march 20 - april 19
Taurus            april 20 - may 20
Gemini            may 21 - june 20
cancer            june 21 - july 22
leo               july 23 - august 22
virgo             august 23 - september 22
libra             septmber 23 - october 22
scorpio           october 23 - november 21
sagittarius       november 22 - december 21*/

/*Decide Zodiac sign based on date and month of birth*/
#include <stdio.h>

int main()
{
    int d, m;
    printf("\nEnter date and month of birth: ");
    scanf("%d%d", &d, &m);
    if (d >= 22 && m == 12 || d <= 19 && m == 1)
        printf("Capricon\n");
    if (d >= 20 && m == 1 || d <= 17 && m == 2)
        printf("Aquarius\n");
    if (d >= 18 && m == 2 || d <= 19 && m == 3)
        printf("pisces\n");
    if (d >= 20 && m == 3 || d <= 19 && m == 4)
        printf("aries\n");
    if (d >= 20 && m == 4 || d <= 20 && m == 5)
        printf("Taurus\n");
    if (d >= 21 && m == 5 || d <= 20 && m == 6)
        printf("Gemini\n");
    if (d >= 21 && m == 6 || d <= 22 && m == 7)
        printf("cancer\n");
    if (d >= 23 && m == 7 || d <= 22 && m == 8)
        printf("leo\n");
    if (d >= 23 && m == 8 || d <= 22 && m == 9)
        printf("virgo\n");
    if (d >= 23 && m == 9 || d <= 22 && m == 10)
        printf("libra\n");
    if (d >= 23 && m == 10 || d <= 21 && m == 11)
        printf("scorpio\n");
    if (d >= 22 && m == 11 || d <= 21 && m == 12)
        printf("sagittarius\n");

    return 0;
}
