\*write a c program to take two integer number(user defined input)and perform addition,subtaction,multiplication,dision and modulus*\
#include <stdio.h>
int main()
{
    int a,b,add,sub,mul,mod;
    float div;
    printf("enter the 1st number=");
    scanf("%d",&a);
    printf("enter the 2nd number=");
    scanf("%d",&b);
    add=a+b;
    printf("addition=%d\n",add);
    sub=a-b;
    printf("subtraction=%d\n",sub);
    mul=a*b;
    printf("multiplication=%d\n",mul);
    div=(float)a/b;
    printf("division=%.1f\n",div);
    mod=a%b;
    printf("modulus=%d\n",mod);

    return 0;
}
