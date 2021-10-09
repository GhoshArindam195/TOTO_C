#include<stdio.h>
#include<string.h>

struct Student
{
    char name[100];
    int roll;
    int class;
    double marks;
};

void main()
{
    int n;
    printf("How many Student's details are you entering?\n");
    scanf("%d", &n);

    struct Student students[n];
    printf("Please enter %d Student's details: (Kindly use underscore instead of blank space)\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &students[i].name);
        scanf("%d", &students[i].roll);
        scanf("%d", &students[i].class);
        scanf("%lf", &students[i].marks);
    }
    
    printf("Students details are shown below:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name -> %s\n", students[i].name);
        printf("Roll -> %d\n", students[i].roll);
        printf("Class -> %d\n", students[i].class);
        printf("Marks -> %lf\n", students[i].marks);
        printf("***************************\n");
    }
}