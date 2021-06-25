/*write a c program to find power of any number(x^y)*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,c;
    printf("Enter the number=");
    scanf("%f",&x);
    printf("Enter the power=");
    scanf("%f",&y);
    c=pow(x,y);
    printf("The result is %f",c);

    return 0;
}
