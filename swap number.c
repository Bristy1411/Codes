/*write a c program to check right & left shift operator of any number*/
#include<stdio.h>
int main()
{
    int x,c1,c2;
    printf("enter the value of x=");
    scanf("%d",&x);
    c1=x>>1;
    c2=x<<1;
    printf("1st result=%d\n2nd result=%d\n",c1,c2);
    return 0;
}
