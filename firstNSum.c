#include<stdio.h>   //Standard Input and Output
void main()
{
    int n;
    printf("Please enter your number\n");
    scanf("%d", &n);
    int sum=0;

    for(int i=1; i<=n; i++)     
    {
        sum+=i;
    }
    printf("sum = %d", sum);

}