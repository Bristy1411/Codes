/*write a c program to find the area of a triangle*/
#include <stdio.h>

int main()
{
    float base,hight,area;
    printf("ente the value of base=");
    scanf("%f", &base);
    printf ("enter the value of hight=");
    scanf("%f", &hight);
    area=0.5*base*hight;//here is the formula
    printf("area=%f\n",area);

    return 0;
}
