/*write a c program to find remainder of two numbers*/
#include <stdio.h>

int main()
{
    int a,b,c=0;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    c=a%b;
    printf("%d", c);

    return 0;
}
