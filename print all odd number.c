/*write a c program to print all odd number between 1 to n*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number=");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        printf("%d\t",i);
    }

    return 0;
}
