#include<stdio.h>
void main()
{
    int a=20, b=25, c=30;

    int flag= a>b;
    switch (flag)
    {
        case 0:
            flag= b>c;
            switch (flag)
            {
                case 1:
                    printf("B is greater");
                    break;
                default:
                    printf("C is greater");
            }
            break;
    
        default:
            flag= a>c;
            switch (flag)
            {
                case 1:
                    printf("A is greater");
                    break;
                default:
                    printf("C is greater");
            }
    }
}