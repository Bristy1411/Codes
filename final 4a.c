#include<stdio.h>
int func(int x)
{
    if(x<=9)
        return ++x;
    else
        return func(--x);
}
int main()
{
    printf("%d",func(17));
}
