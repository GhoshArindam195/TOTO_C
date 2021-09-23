#include<stdio.h>
#include<string.h>
void main()
{
    int n=100;
    int m=n;

    char name[]="Toto Kumar";
    char fullName[100];


    strcpy(fullName, name);

    puts(fullName);
}