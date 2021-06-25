#include<stdio.h>
int main()
{
    char a;
    int basic_salary,sell_cost,gross_salary;
    printf("Enter the name=");
    scanf("%s",&a); /*%s is formate specifier of string,use for take complete sentence*/
    printf("basic salary=");
    scanf("%d",&basic_salary);
    printf("sell cost=");
    scanf("%d",&sell_cost);
    gross_salary=basic_salary+(sell_cost*20)/100;
    printf("gross salary=%d",gross_salary);

    return 0;
}
