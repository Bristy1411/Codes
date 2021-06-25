#include<stdio.h>
int z;
int prod(int a,int b)
{
    return a*b;
}
int main()
{
    int x=10,y=20;
    int p,q;
    p=prod(x,y);
    q=prod(p,prod(x,z));
    printf("p is=%d\nq is=%d",p,q);
    return 0;
}
