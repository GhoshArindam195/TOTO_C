#include<stdio.h>
int getReverse(int n)
{
    int rev=0;
    while(n>0)
    {
        int mod=n%10;
        rev=rev*10+mod;
        n/=10;
    }
    return rev;
}

void main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d", &n);

    int rev = getReverse(n);
    printf("Your reversed number is %d\n", rev);
}