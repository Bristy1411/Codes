#include <stdio.h>
int main()
{
    int salary,dearness_allowance,house_rent_allowance,gross_salary;
    printf("enter the salary amount=");
    scanf("%d",&salary);

    dearness_allowance=salary*40/100;
    printf("dearness_allowance=%d\n",dearness_allowance);

    house_rent_allowance=salary*20/100;
    printf("house_rent_allowance=%d\n",house_rent_allowance);

    gross_salary=salary+dearness_allowance+house_rent_allowance;
    printf("gross_salary=%d\n",gross_salary);

    return 0;
}
