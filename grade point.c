#include <stdio.h>/*write a c program to input 5 marks of 5 ifferent subjects.and calculate percentage and grade according to-
percentage>90%,grade A
percentage<90%and>=80%,grade B
percentage<80%and>=70%,grad C
percentage<70%and>=60%,grade D
percentage<60%and>=50%,grade E
percentage<40%,grade F*/
int main()
{
    float sub1,sub2,sub3,sub4,sub5,sum,total,percentage;
    printf("Enter the mark of subject 1=");
    scanf("%f", &sub1);
    printf("Enter the mark of subject 2=");
    scanf("%f", &sub2);
    printf("Enter the mark of subject 3=");
    scanf("%f", &sub3);
    printf("Enter the mark of subject 4=");
    scanf("%f", &sub4);
    printf("Enter the mark of subject 5=");
    scanf("%f", &sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    total=500;
    percentage=(sum/total)*100;
    printf("Percentage of the subjects=%f\n", percentage);
    if(percentage>90)
       {
          printf("Grade A");
       }
    else if(percentage<90&&percentage>=80)
    {
          printf("Grade B");
    }
    else if(percentage<80&&percentage>=70)
        {
            printf("Grade C");
        }
    else if(percentage<70&&percentage>=60)
        {
            printf("Grade D");
        }
    else if(percentage<60&&percentage>=50)
        {
            printf("Grade E");
        }
    else if(percentage<40)
        {
            printf("Grade F");
        }
    else
       {
           printf("");
       }

    return 0;
}
