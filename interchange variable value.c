#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the value of a=");
    scanf("%d", &a);
    printf("enter the value of b=");
    scanf("%d", &b);
    c=a;
    a=b;
    printf("a=%d\n",a);
    b=c;
    printf("b=%d\n",b);
}
