#include<stdio.h>

void swap(int a, int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}


void main()
{  
    int a=10, b=20;
    swap(a, b);

    printf("a = %d\nb = %d\n", a, b);   // a=10
                                        // b=20
}