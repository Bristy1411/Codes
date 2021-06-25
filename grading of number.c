#include<stdio.h>
int main()
{
    int x;
    printf("enter the number=");
    scanf("%d",&x);

    if(x<=100&&x>=80)
       {
          printf("Grade A+");
       }
    else if(x<79&&x>=75)
    {
          printf("Grade A");
    }
    else if(x<74&&x>=70)
        {
            printf("Grade A-");
        }
    else if(x<69&&x>=65)
        {
            printf("Grade B");
        }
    else if(x<64&&x>=60)
        {
            printf("Grade B+");
        }
    else if(x<=59&&x>=55)
        {
            printf("Grade B-");
        }
    else if(x<=54&&x>=50)
        {
            printf("Grade C+");
        }
    else if(x<=49&&x>=45)
        {
            printf("Grade C");
        }
    else if(x<=44&&x>=40)
        {
            printf("Grade D");
        }
    else
       {
           printf("Fail");
       }

    return 0;
}
