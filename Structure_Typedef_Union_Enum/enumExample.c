#include<stdio.h>

enum day{Mon=1, Tue, Wed, Thu, fri, Sat, Sun};

void main()
{
    enum day d;
    d = Mon;
    printf("%d\n", d);

    if(d == Mon)
    {
        printf("This is Monday\n");
    }
    else
    {
        printf("Other Day\n");
    }
}