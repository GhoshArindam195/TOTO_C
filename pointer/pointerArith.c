#include<stdio.h>
void main()
{
    int a=34;
    int *ptr=&a;
    
    // printf("%u\n", ptr);  //6422216
    // printf("%u\n", ptr+1);  //6422216+(1*4)=6422220
    // printf("%u\n", ptr+2);  //6422216+(2*4)=6422224
    // printf("%u\n", ptr+3);  //6422216+(3*4)=6422228

    // printf("%u\n", ptr);  //6422216
    // printf("%u\n", ptr-1);  //6422216-(1*4)=6422212
    // printf("%u\n", ptr-2);  //6422216-(2*4)=6422208
    // printf("%u\n", ptr-3);  //6422216-(3*4)=6422204

    
    // printf("%u\n", ptr);  //6422216
    // printf("%u\n", ++ptr);  //6422220
    // printf("%u\n", ptr);  //6422220
    
    // printf("%u\n", ptr);  //6422216
    // printf("%u\n", ptr++);  //6422216
    // printf("%u\n", ptr);  //6422220
    
    // printf("%u\n", ptr);  //6422216
    // printf("%u\n", --ptr);  //6422212
    // printf("%u\n", ptr);  //6422212
    
    // printf("%u\n", ptr);  //6422216
    // printf("%u\n", ptr--);  //6422216
    // printf("%u\n", ptr);  //6422212
    







}