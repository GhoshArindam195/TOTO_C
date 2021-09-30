#include<stdio.h>

struct Rectangle
{
    int len;
    int bread;
};

void change(struct Rectangle *r)
{
    (*r).len=100;
    r->bread=10;
}
void main()
{
    struct Rectangle toto={10, 100};
    change(&toto);

    printf("%d\n%d", toto.len, toto.bread);
}