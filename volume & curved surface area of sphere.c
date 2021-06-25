#include <stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
    double r,v,c;
    scanf("%lf", &r);
    v=(4/3)*PI*pow(r,2);
    printf("volume=%lf\n", v);
    c=2*PI*pow(r,2);
    printf("curved surface area=%lf\n", c);

    return 0;

}
