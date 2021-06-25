#include <stdio.h>/*write a c program to enter temperature in celsius and convert it into fahrenheit*/

int main()


{
    float celsius,fahrenheit;
    printf("enter the temperature in celsius=");
    scanf("%f", &celsius);
    fahrenheit=celsius*9/5+32;//this is the formula of convert celsius into fahrenheit
    printf("the temperature in fahrenheit is=%f\n", fahrenheit);

    return 0;
}
