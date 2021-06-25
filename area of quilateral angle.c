#include <stdio.h>/*write a c program to calculate area of an quilateral angle*/
#include<math.h>

int main()
{
    float a,area;
    printf("enter the value of a=");
    scanf("%f", &a);
    area=(sqrt(3)/4)*pow(a,2);//here is formula
    printf("area of the equilateral angle=%f\n", area);

    return 0;
}
