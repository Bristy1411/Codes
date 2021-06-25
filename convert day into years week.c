#include <stdio.h>/*write a c program to convert days into weeks and years*/

int main()
{
    int x,day,week,year;
    printf("enter the day=");
    scanf("%d",&x);
    week=x/7;
    printf("Weeks=%d\n", week);
    year=x/365;
    printf("Years=%d\n", year);
    day=x;
    printf("Days=%d\n",day);

    return 0;
}
