#include <stdio.h>/*write a c program that will give the result o area and perimeter of rectangle and compare that both result is
equal or not*/
int main()
{
    float a,b,area,perimeter;
    scanf("%f %f", &a,&b);
    area=a*b;
    printf("area=%f\n", area);
    perimeter=2*(a+b);
    printf("perimeter=%f\n", perimeter);
    if(area==perimeter)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;

}
