#include<stdio.h>
int main()
{
    float x,y=1.0;
    int n,i=1;
    printf("enter base number=");
    scanf("%f",&x);
    printf("enter power=");
    scanf("%d",&n);
    while(i<=n)
    {
        y=y*x;
        i++;
    }
    printf("%f to power %d=%f",x,n,y);
}
