#include <stdio.h>/*write a c program to find the area,diameter,circumference of a circle*/
#include <math.h>
#define PI 3.14
int main()
{
    float r,diameter,circumference,area;
    printf("enter the radius=");
    scanf("%f", &r);
    diameter=2*r;
    printf("diameter of the circle=%.2f\n",diameter);
    circumference=2*PI*r;
    printf("circumference of the circle=%.2f\n",circumference);
    area=PI*pow(r,2);
    printf("area of the circle=%.2f\n", area);

    return 0;
}
