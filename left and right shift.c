#include<stdio.h>
int main()
{
    int x,n,shift_1,shift_2,shift_3;
    printf("enter the value of x=");
    scanf("%d",&x);
    shift_1=x>>1;
    shift_2=x>>2;
    shift_3=x>>3;
    printf("%d\n%d\n%d",shift_1,shift_2,shift_3);
    return 0;

}
