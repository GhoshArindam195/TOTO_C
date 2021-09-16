#include<stdio.h>
void main()
{
    char name[100], father[100], mother[100], address[200];

    // printf("Enter your Name: \n");
    gets(name);
    // printf("Enter your Father's Name: \n");
    gets(father);
    // printf("Enter your Mother's Name: \n");
    gets(mother);
    // printf("Enter your address: \n");
    gets(address);

    printf("Details shown below: \n");
    puts(name);
    puts(father);
    puts(mother);
    puts(address);
}