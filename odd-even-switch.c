#include<stdio.h>
void main()
{
    int n;
    printf("Enter you number: \n");
    scanf("%d", &n);

    // if(n%2==0)
    // {
    //     printf("Even");
    // }
    // else
    // {
    //     printf("Odd");
    // }

    int toto = n%2; //11%2

    switch (toto)
    {
        case 0:
            printf("%d is even number", n);
            break;
        // case 1:
        //     printf("%d is odd number", n);
        //     break;
        default:
            printf("%d is odd number", n);
    }


}