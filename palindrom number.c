/*write a c program to check  the number is palindrome or not*/
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
        sum=sum*10+y;
        x=x/10;
    }
    printf("the reversed number is=%d\n",sum);

    if(temp==sum)
        printf("the number is palindrome");
    else
        printf("the number is not palindrome");

    return 0;
}
