#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("%s() %s\n",__FUNCTION__ , __FILE__);
    printf("%s \n", __DATE__);
    printf("%s \n", __TIME__); 
    printf("%d \n", __LINE__); 
} 