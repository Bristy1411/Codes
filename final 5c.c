#include<stdio.h>
int main()
{
    char c[100];
    char ch[100]={'0'};
    gets(c);
    int i=0,j=0,k=0;
    while(c[i]!='\0')
    {
        i++;
        j++;
    }
    for(i=n-1;i>=0;i--)
    {
        ch[k]=c[i];
        k++;
    }
    printf("%s",ch);
    return 0;
}

