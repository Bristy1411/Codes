/*Write a c program to enter temperature in celsius and convert it into fahrenheit and vice versa*/
#include <stdio.h>
int main()
{
    float x,y,C,F;
    printf("Enter the temperature in celsius=");
    scanf("%f",&x);
    F=x*9/5+32;
    printf("In fahrenheit the temperatur=%f\n",F);
    printf("Enter the temperature in fahrenheit=");
    scanf("%f",&y);
    C=y/9*5-32;
    printf("In celsius the temperatur=%f",C);

    return 0;
}
