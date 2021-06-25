#include<stdio.h>
union x
{
    char name[37];
    int a;
    float b;
}a;
int main()
{
  printf("%d\n",sizeof(a));
}
