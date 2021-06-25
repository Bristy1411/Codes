/*write a c program to check least significnt bit(LSB)of a number is set or not*/
#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x=");
    scanf("%d",&x);
    if(x&1)
        printf("set");
    else
        printf("not set");

    return 0;
}
