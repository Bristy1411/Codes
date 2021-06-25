#include <stdio.h>/*write a c program to enter marks of 5subjects and calculate total and average and percentage*/

int main()
{
    float sub1,sub2,sub3,sub4,sub5,total,average,percentage;
    printf("enter the mark of subject 1=");
    scanf("%f", &sub1);
    printf("enter the mark of subject 2=");
    scanf("%f", &sub2);
    printf("enter the mark of subject 3=");
    scanf("%f", &sub3);
    printf("enter the mark of subject 4=");
    scanf("%f", &sub4);
    printf("enter the mark of subject 5=");
    scanf("%f", &sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    printf("total=%f\n", total);
    average=total/5;
    printf("average=%f\n", average);
    percentage=(total/500)*100;
    printf("percentage=%f\n",percentage);

    return 0;
}
