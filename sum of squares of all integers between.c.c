#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter number=");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        sum=sum+i*i;
    }
    printf("sum of squares of all integers between 1 to %d =%d",n,sum);
    return 0;
}
