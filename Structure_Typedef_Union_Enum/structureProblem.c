#include<stdio.h>
#include<string.h>

struct Student
{
    char name[100];
    int roll;
    int class;
    double marks;
}toto;  

void main()
{
    struct Student arindam; 

    printf("Please enter Toto's details: (Kindly use underscore instead of blank space)\n");
    // gets(toto.name);
    scanf("%s", &toto.name);
    scanf("%d", &toto.roll);
    scanf("%d", &toto.class);
    scanf("%lf", &toto.marks);
    
    printf("Please enter Arindam's details: (Kindly use underscore instead of blank space)\n");
    // gets(arindam.name);
    scanf("%s", &arindam.name);
    scanf("%d", &arindam.roll);
    scanf("%d", &arindam.class);
    scanf("%lf", &arindam.marks);


    printf("Toto's details are shown below:\n");
    printf("Name -> %s\n", toto.name);
    printf("Roll -> %d\n", toto.roll);
    printf("Class -> %d\n", toto.class);
    printf("Marks -> %lf\n", toto.marks);

    printf("Arindam's details are shown below:\n");
    printf("Name -> %s\n", arindam.name);
    printf("Roll -> %d\n", arindam.roll);
    printf("Class -> %d\n", arindam.class);
    printf("Marks -> %lf\n", arindam.marks);


    


}