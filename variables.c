#include<stdio.h>

int global=1000; //Global.....
void add()
{
    int local=10;    //Local var....
    printf("%d\n", local);  //10    10
    global = 1000;
    local+=1;   //11
}

void testStaic()
{
    static int var=10;
    printf("%d\n", var);
    var+=1; //14
}

void main()
{
    // printf("%d\n", toto);    //Error...
    global=0;
    // add();
    // add();
    
    testStaic();
    testStaic();
    testStaic();
    testStaic();
}