/*write a c program to find the area of square*/
#include <stdio.h>

int main()
{
    float side,area;
    printf("enter the side=");
    scanf("%f", &side);
    area=side*side;
    printf("area of thesquare=%f\n", area);

    return 0;
}
