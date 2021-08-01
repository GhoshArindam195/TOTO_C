#include<stdio.h>
int primeCheck(int n)   
{
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

void main()
{
    int n;
    printf("Enter your limit:\n");
    scanf("%d", &n);

    for(int i=2; i<=n; i++)
    {
        if(primeCheck(i)==1)
            printf("%d ", i);
    }
}