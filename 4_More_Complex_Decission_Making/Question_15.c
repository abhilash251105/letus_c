/*Rewrite the following programs using conditional operators.*/
#include <stdio.h>

/*int main()
{
    float sal;
    printf("Enter salary");
    scanf("%f", &sal);
    if(sal>=25000 && sal<=40000)
    printf("Maneger\n");
else if (sal>=15000 &&sal<25000)
printf("Accountant\n");
else
printf("Clerk\n");
    return 0;
}*/

/*using conditional operator*/
#include <stdio.h>

int main()
{
    float sal;
    printf("\nenter the salary: ");
    scanf("%f",&sal);

    (sal > 25000 && sal <= 40000 ? printf("Maneger\n") : (sal >= 15000 && sal < 25000 ? printf("Accountant\n") : printf("Clerk\n")));
    return 0;
}