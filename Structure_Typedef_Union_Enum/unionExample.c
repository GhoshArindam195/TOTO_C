#include<stdio.h>

// struct Student
// {
//     int id;  //4 Byte
//     char ch; // 1 byte
// }s1; //4+1=5Bytes

union Student
{
    int id; //4byte
    char ch;    //1 Byte
}s2;    //Max(4, 1)=4 bytes


void main()
{
    printf("%d\n", sizeof(s2)); //4
}