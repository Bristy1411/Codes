#include <stdio.h>/*write a c program to enter marks of 3 subjects and calculate total and average*/

int main()
{
    float sub1,sub2,sub3,total,average;
    printf("enter the mark of subject 1=");
    scanf("%f", &sub1);
    printf("enter the mark of subject 2=");
    scanf("%f", &sub2);
    printf("enter the mark of subject 3=");
    scanf("%f", &sub3);
    total=sub1+sub2+sub3;
    printf("total=%f\n", total);
    average=total/3;
    printf("average=%f\n", average);

    return 0;
}
