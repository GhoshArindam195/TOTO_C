#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr = (int*) malloc(sizeof(int)*5);

    ptr[0]=10;
    ptr[1]=12;
    ptr[2]=1;
    ptr[3]=17;
    ptr[4]=7;

    ptr = (int *) realloc(ptr, sizeof(int)*7);


    ptr[5] = 29;
    ptr[6] = 19;
    for(int i=0; i<7; i++)
    {
        printf("%d ", ptr[i]);
    }
}