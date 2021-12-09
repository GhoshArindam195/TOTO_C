#include<stdio.h>
#include<stdlib.h>
int* myFunc()
{
    int a = 100;
    return &a;
}

void main()
{
    // Case 1............
    // int *ptr = (int*) malloc(sizeof(int));
    // int *ptr2 = ptr;

    // free(ptr);
    // ptr = NULL;
    // ptr2 = NULL;

    // Case 2............
    // int *ptr = myFunc();
    // printf("%d", *ptr);
    // ptr = NULL;


    // Case 3............
    int *ptr;
    {
        int i=10;
        ptr=&i;
    }
    printf("%d\n", *ptr);
    ptr=NULL;
}