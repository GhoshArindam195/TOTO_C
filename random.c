#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generateRandom(int n)
{
   
    int random = rand()%n;
    return random;
}

void main()
{
    srand(time(NULL));
    for(int i=0; i<=100; i++)
        printf("%d\n", generateRandom(6)+29);
}
