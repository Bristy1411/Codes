/*write a c program to find the semi perimeter of a triangle*/
#include<stdio.h>

int main()
{
    float arm1,arm2,arm3,semiperimeter;
    printf("enter the value of arm 1=");
    scanf("%f", &arm1);
    printf("enter the value of arm 2=");
    scanf("%f", &arm2);
    printf("enter the value of arm 3=");
    scanf("%f", &arm3);
    semiperimeter=(arm1+arm2+arm3)/2;
    printf("semi perimeter=%f\n", semiperimeter);

    return 0;
}
