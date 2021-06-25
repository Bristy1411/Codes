/*write a c program to find the perimeter of a triangle*/
#include<stdio.h>

int main()
{
    float arm1,arm2,arm3,perimeter;
    printf("enter the value of arm 1=");
    scanf("%f", &arm1);
    printf("enter the value of arm 2=");
    scanf("%f", &arm2);
    printf("enter the value of arm 3=");
    scanf("%f", &arm3);
    perimeter=arm1+arm2+arm3;
    printf("perimeter=%f\n", perimeter);

    return 0;
}
