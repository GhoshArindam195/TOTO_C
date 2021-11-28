#include<stdio.h>
void main()
{
    int a=10;
    int *iptr = &a;

    float b=20.5;
    float *fptr = &b;

    void *ptr;

    //iptr=fptr;  //Error
    //fptr=iptr;  //Error

    ptr = iptr;
    printf("%d\n", *(int *)ptr);

    ptr = fptr;
    printf("%f\n", *(float *)ptr);

}
