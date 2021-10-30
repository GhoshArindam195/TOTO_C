#include<stdio.h>
#include<string.h>
void parser(char *str)
{
    int in=0, index=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='<')
        {
            in=1;
            continue;
        }
        else if(str[i]=='>')
        {
            in=0;
            continue;
        }

        if(in==0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index]='\0';

    //Removing Leading Spaces...........
    while(str[0]==' ')
    {
        for(int i=0; i<strlen(str); i++)
            str[i]=str[i+1];
    }

    //Removing Trailing Spaces.......
    while(str[strlen(str)-1]==' ')
        str[strlen(str)-1]='\0';
}

void main()
{
    char str[]="<h1>           Hello Toto Sir            </h1>";
    parser(str);
    printf("The parsed string is as followed:\n");
    puts(str);
}
