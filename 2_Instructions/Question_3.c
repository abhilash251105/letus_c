/*Write a program to receive values of latitude (L1,L2) and longitude (G1,G2), in degrees, 
of two places on the earth and output the distance (D) between them in nutical miles. 
The formula for distance in nautical mile is: D= 3963cos-1(sinL1 sinL2 * cos L1 cosL2 * (G2 - G1))*/

/*calculate distance between two places in Nutical mile.*/
#include <stdio.h>
#include <math.h>
int main()
{
    float lat1, lat2, lon1, lon2, D;

    printf(" \nEnter the latitute and longitute of place 1:", lat1, lon1);
    scanf("%f %f", &lat1, &lon1);

    printf(" \nEnter the latitute and longitute of place 2:", lat2, lon2);
    scanf("%f %f", &lat2, &lon2);

    lat1 = lat1 * 3.14 * 180;
    lat2 = lat2 * 3.14 * 180;
    lon1 = lon1 * 3.14 * 180;
    lon2 = lon2 * 3.14 * 180;

    D = 3963 * acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1));

    printf("distance between place1 and place2 is:%f\n", D);

    return 0;
}
