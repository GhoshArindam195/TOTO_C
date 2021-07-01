#include<stdio.h>
void main()
{
    int a=100, b=200, c=201;
    //Ternary Operator........
    // a>b ? printf("%d", a) : printf("%d", b);

    (a>b)?(a>c)?printf("%d",a):printf("%d",c):(b>c)?printf("%d",b):printf("%d",c);
}