#include<stdio.h>
int main()
{
    int number,i,a;
    printf("Enter the number whose multiplication table want to print=");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
        a=number*i;
        printf("%d*%d=%d\n",number,i,a);
    }
    return 0;
}
