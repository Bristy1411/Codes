/*write a c program to check  the number is amstronge or not*/
#include <stdio.h>
int main()
{
    int x,y,sum=0;
    printf("enter the number=");
    scanf("%d",&x);
    int temp=x;
    while(x>0)
    {
        y=x%10;
        sum=sum+y*y*y;
        x=x/10;
    }
    if(temp==sum)
        printf("the number is Armstrong");
    else
        printf("the number is not Armstrong");

    return 0;
}

