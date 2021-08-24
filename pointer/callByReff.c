#include<stdio.h>

void swap(int *a, int *b)
{
    *a = *a+*b; //a=30
    *b = *a-*b; //b=10
    *a = *a-*b; //a=20
}


void main()
{  
    int a=10, b=20;
    swap(&a, &b);

    printf("a = %d\nb = %d\n", a, b);   // a=20
                                        // b=10
}