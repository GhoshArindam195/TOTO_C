#include<stdio.h>

struct Student
{
    int roll;
    int class;
    double marks;
}toto;  //toto is a globally declared variable of struct Student type

void main()
{
    struct Student arindam; //arindam is a locally declared variable of struct Student type

    toto.roll=29;
    toto.class=8;
    toto.marks=95;
    
    arindam.roll=48;
    arindam.class=7;
    arindam.marks=80;


    printf("Toto's details are shown below:\n");
    printf("Roll -> %d\n", toto.roll);
    printf("Marks -> %d\n", toto.marks);
    printf("Class -> %d\n", toto.class);

    printf("Arindam's details are shown below:\n");
    printf("Roll -> %d\n", arindam.roll);
    printf("Marks -> %d\n", arindam.marks);
    printf("Class -> %d\n", arindam.class);


    


}