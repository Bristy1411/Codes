/*write a c program to enter any number & calculate its square root*/
#include<stdio.h>
#include<math.h>

int main()
{
    float x,a;
    printf("Enter the number=");
    scanf("%f",&x);
    a=sqrt(x);
    printf("The result is=%f",a);

    return 0;
}
