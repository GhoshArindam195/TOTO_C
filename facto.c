#include<stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    if(n==0)
    {
        printf("%d", 1);
        return;
    }
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("%d", fact);
}