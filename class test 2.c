#include <stdio.h>

int main()

{
    int a,b,c;
    a=4;
    b=3;
    c=a&&b;
    b=a||b||c;
    a=a&&b||c;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    return 0;
}
