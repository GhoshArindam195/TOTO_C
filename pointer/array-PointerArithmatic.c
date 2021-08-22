#include<stdio.h>
void main()
{
    int arr[]={4, 7, 6, 2, 1};
    int *arrP = &arr;

    // printf("%u\n", &arr[0]);    //6422200
    // printf("%u\n", arrP);   //6422200
    // printf("%u\n", &arr);   //6422200

    // printf("%d\n", arr[0]);    //4
    // printf("%d\n", *(arrP+1));   //7
    // printf("%d\n", *(arrP+4));   //1
}