#include<stdio.h>
int main()
{
    auto int a=4;
    printf("%d",a--);
    if(a)
        main();
}


//aita indefinitely print korbe....
