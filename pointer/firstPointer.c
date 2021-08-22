#include<stdio.h>
void main()
{
    int a=10;

    // int *p; //declaration
    // p=&a;   //Initialization

    int *p=&a;

    printf("%u\n", &a); //6422216
    printf("%u\n", p); //6422216

    
    printf("a= %d\n", a); //10
    printf("a= %d\n", *p); //10

    *p=100;

    printf("a= %d\n", a); //100

    int *ptr=NULL;
    

}