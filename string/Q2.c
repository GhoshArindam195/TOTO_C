#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char str[100];
    gets(str);
    int len = strlen(str);
    char* ans = (char *) malloc(sizeof(char)*len*5);

    int i=0;
    int j=0;
    while(str[i]!='\0')
    {
        char ch = str[i];
        int count = ch%5;
        for(int k=1; k<=count; k++)
        {
            ans[j] = ch;
            j++;
        }
        i++;
    }
    ans[j]='\0';
    puts(ans);


}