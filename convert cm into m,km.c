#include <stdio.h>/*write a c program to enter length in centimeter and convert it into mete and kilometer*/

int main()
{
    float centimeter,meter,kilometer;
    printf("Enter the centimeter value=");
    scanf("%f", &centimeter);
    meter=centimeter/100;
    printf("the converted valu in meter=%f\n", meter);
    kilometer=centimeter/100000;
    printf("the convertad valu in kilimeter=%f\n", kilometer);

    return 0;
}
