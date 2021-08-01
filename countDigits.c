#include <stdio.h>

int getCountDigit(int n)
{
    int counter = 0;
    while (n > 0)
    {
        counter++;
        n/=10;
    }
    return counter;
}
void main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d", &n);

    int digit = getCountDigit(n);
    printf("Your digit count is: %d\n", digit);
}