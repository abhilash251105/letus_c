/*    */

/*Calculation of paper size A0 to A8*/

#include <stdio.h>

int main()
{
    int a0ht, a0wd;
    int a1ht, a1wd, a2ht, a2wd;
    int a3ht, a3wd, a4ht, a4wd;
    int a5ht, a5wd, a6ht, a6wd;
    int a7ht, a7wd, a8ht, a8wd;

    a0ht = 1189;
    a0wd = 841;
    printf("size of A0 paper height=%d, width=%d\n", a0ht, a0wd);

    a1ht = a0wd;
    a1wd = a0ht / 2;
    printf("size of A1 paper height=%d, width=%d\n", a1ht, a1wd);

    a2ht = a1wd;
    a2wd = a1ht / 2;
    printf("size of A2 paper height=%d, width=%d\n", a2ht, a2wd);

    a3ht = a2wd;
    a3wd = a2ht / 2;
    printf("size of A3 paper height=%d, width=%d\n", a3ht, a3wd);

    a4ht = a3wd;
    a4wd = a3ht / 2;
    printf("size of A4 paper height=%d, width=%d\n", a4ht, a4wd);

    a5ht = a4wd;
    a5wd = a4ht / 2;
    printf("size of A5 paper height=%d, width=%d\n", a5ht, a5wd);

    a6ht = a5wd;
    a6wd = a5ht / 2;
    printf("size of A6 paper height=%d, width=%d\n", a6ht, a6wd);

    a7ht = a6wd;
    a7wd = a6ht / 2;
    printf("size of A7 paper height=%d, width=%d\n", a7ht, a7wd);

    a8ht = a7wd;
    a8wd = a7ht / 2;
    printf("size of A8 paper height=%d, width=%d\n", a8ht, a8wd);
    return 0;
}