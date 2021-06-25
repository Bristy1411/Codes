#include<stdio.h>
int main()
{
    int x,n;
    printf("enter the value of x=");
    scanf("%d",&x);
    n=x<<31;
    if(n&1)
        printf("set");
    else
        printf("not set");

    return 0;
}
