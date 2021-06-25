#include <stdio.h>/*write a c program that will take input from user and give the result of addition,subtraction,multiplication
and division*/

int main()
{
    int a,b,sum;
    printf("Enter the value of a="); //here 1st value is taken
    scanf("%d", &a);
    printf("Enter the value of b=");//here 2nd value is taken
    scanf("%d", &b);
    sum=a+b;//this is the formula of addition
    printf("%d\n", sum);//here the result of addition will printed
    sum=a-b;//this is the formula of subtraction
    printf("%d\n", sum);//here the result of subtraction will printed
    sum=a*b;//this is the formula of multiplication
    printf("%d\n", sum);//here the result of multiplication will printed
    sum=a/b;//this is the formula of division
    printf("%d\n", sum);//here the result of division will printed

    return 0;
}
