#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[10];

    int *ptr = (int*)malloc(10*sizeof(int));
    ptr[0]=100;

    free(ptr); 
}
