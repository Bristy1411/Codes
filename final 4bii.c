#include<stdio.h>
int main()
{
    static int a=4;
    printf("%d\n",a--);
    if(a)
        main();
}

