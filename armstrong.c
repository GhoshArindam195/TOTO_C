#include<stdio.h>
#include<math.h>
    
int isArmstrong(int n)
{
    int check=n;
    int sum=0;
    while(n>0)
    {
        int mod=n%10;
        sum+=pow(mod, 3);
        n/=10;
    }
    if(sum==check)
        return 1;
    else
        return 0;
}
void main()
{
    int n;
    printf("Enter your 3 digit number:\n");
    scanf("%d", &n);
    if(isArmstrong(n)==1)
        printf("The %d is an Armstrong number\n", n);
    else
        printf("The %d is not an Armstrong number\n", n);
}