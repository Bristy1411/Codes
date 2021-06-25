#include <stdio.h>/*find the quadrant of two coordinates(x,y)*/

int main()
{
    int x,y;
    printf("Enter the value of x=");
    scanf("%d", &x);
    printf("Enter the value of y=");
    scanf("%d", &y);
    if(x==0&&y==0)
    {
        printf("center");
    }
    else if(x>0&&y>0)
    {
        printf("first quadrant");
    }
    else if(x<0&&y>0)
    {
        printf("second quadrant");
    }
    else if(x<0&&y<0)
    {
        printf("third quadrant");
    }
    else if(x>0&&y<0)
    {
        printf("fourth quadrant");
    }
    else if(x==0&&y>0)
    {
        printf("accordint to 0 ");
    }
    else if(x>0&&y==0)
    {
        printf("according to 0");
    }
    else if(x==0&&y<0)
    {
        printf("according to 0");
    }
    else if(x<0&&y==0)
    {
        printf("according to 0");
    }
    else
    {
        printf("");
    }

    return 0;
}
