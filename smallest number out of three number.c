#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if (x>y)
    {
        if(x>z)
            printf("largest number is %d",x);
        else
            printf("");
    }
    else if(y>x)
    {
        if(y>z)
            printf("largest number is %d",y);
        else
            printf("largest number is %d",z);
    }
    else
        printf("");
    return 0;
}
