#include <stdio.h>/*write a c program if a person's age is 65 and weight is 40 he is unable to work.
age is less than 65 and weight is 60, he is fit for work.
Or age is greater than 20 or weight is 50 his working ability is confusing to predict.*/

int main()
{
    int age,weight;
    printf("enter the age=");
    scanf("%d",&age);
    printf("enter the weight=");
    scanf("%d",&weight);
    if(age==65&&weight==40)
    {
        printf("unable to work");
    }
    else if(age<65&&weight==60)
    {
        printf("fit for work");
    }
    else if(age>20||weight==50)
    {
        printf("working ability is confusing to predict");
    }
    else
    {
        printf("");
    }
    return 0;
}
