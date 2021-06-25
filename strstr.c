#include<stdio.h>
#include<string.h>
int main()

{
    char c[100],ch[100];
    gets(c);
    gets(ch);
   if(strstr(c,ch)!='\0')
        printf("ch is a sub string of c");
        printf("position of the string is:#%d",pos);
    else
        printf("substring is not found");
}
