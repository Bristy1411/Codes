#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="City University";
    char s2[]="MITR";
    /*strncpy(s1,s2,3);*/
    printf("%s",strncpy(s1,s2,4));
}
