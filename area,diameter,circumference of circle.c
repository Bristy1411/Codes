#include <stdio.h>/*write a c program to find the area of a circle*/
#include <math.h>
#define PI 3.14
int main()
{
    float r,area;
    printf("enter the side=");
    scanf("%f", &r);
    area=PI*pow(r,2);
    printf("area of the square=%f\n", area);

    return 0;
}
