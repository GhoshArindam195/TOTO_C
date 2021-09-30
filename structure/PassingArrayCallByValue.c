#include<stdio.h>

struct Test
{
    int a[5];
    int n;
};

void change(struct Test ob)
{
    ob.a[0]=100;
    ob.a[1]=0;
    ob.n=100;
}

void main()
{
    struct Test t = {{1, 2, 3, 4, 5}, 10};
    change(t);

    printf("%d\n",t.a[0]);
}