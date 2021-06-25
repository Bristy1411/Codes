main()
{
    char str[]="City University";
    int m;
    for(m=0;str[m]!='\0';m++)
        if((m%2)==1)
        printf("%c",str[m]);
}
