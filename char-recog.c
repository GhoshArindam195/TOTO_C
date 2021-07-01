#include<stdio.h>
void main()
{
    char ch;
    scanf("%c", &ch);
    if(ch>=65 && ch<=90)
        printf("UPPER CASE");
    else if(ch>=97 && ch<=122)
        printf("LOWER CASE");
    else if(ch>=48 && ch<=57)
        printf("DIGIT");
    else
        printf("SPECIAL SYMBOL");
}