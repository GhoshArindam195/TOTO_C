#include<stdio.h>
#include<string.h>

typedef union Student
{
    int id; //4 Byte
    float marks;    //4 Byte
    char name[30];  // 30 Byte
}student;

void main()
{
    student s1; //30 Byte
    strcpy(s1.name, "Toto");
    // printf("%s\n", s1.name);

    s1.marks = 90.5;
    // printf("%s\n", s1.name);
    // printf("%f\n", s1.marks);

    s1.id=10;
    printf("%s\n", s1.name);
    printf("%f\n", s1.marks);
    printf("%d\n", s1.id);
    

}