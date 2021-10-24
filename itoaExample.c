#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a =27;
    char buffer[50];

    itoa(a, buffer, 10);
    printf("%s\n", buffer);
}
