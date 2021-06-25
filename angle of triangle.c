/*write a c program to enter two angle of a triangle &find the third angle*/
#include<stdio.h>

int main()
{
    float x,y,z;
    printf("Enter the first angle=");
    scanf("%f",&x);
    printf("Enter the second angle=");
    scanf("%f",&y);
    z=180-(x+y);
    printf("the third angle is=%.1f",z);

    return 0;
}
