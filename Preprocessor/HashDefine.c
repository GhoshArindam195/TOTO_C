#include <stdio.h>

#define pi 3.143
#define pow(n) n*n

void main()
{
    int r;
    printf("Enter the radius of the circle: \n");
    scanf("%d", &r);

    double area = pi * pow(r);

    printf("Area of the circle is %lf\n", area);
}