#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch=='a'||ch=='A')
        printf("%c is vowel", ch);
    else if(ch=='e'||ch=='E')
        printf("%c is vowel", ch);
    else if(ch=='i'||ch=='I')
        printf("%c is vowel", ch);
    else if(ch=='o'||ch=='O')
        printf("%c is vowel", ch);
    else if(ch=='u'||ch=='U')
        printf("%c is vowel", ch);
    else if(ch>0)
        printf("integer");
    else
        printf("%c is consonant", ch);

    return 0;
}
