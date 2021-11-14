#include <stdio.h>
#include <stdlib.h>
void main()
{
    // int n;
    // printf("%d\n",scanf("%d", &n));
    // printf("%d\n", n);

    int *arr;
    int size = 0, inp;
    printf("Hi, Please keep entering your numbers: \n");
    while(1)
    {
        if (scanf("%d", &inp) != 0)
        {
            // Valid input...........
            if(size==0)
            {
                //this is our first valid input...
                size++;
                arr = (int *) malloc(sizeof(int)*size);
                arr[size-1]=inp;
            }
            else
            {
                    //This is not our first input....
                    size++;
                    arr = (int *) realloc(arr, sizeof(int)*size);
                    arr[size-1]=inp;
            }
        }
        else
        {
            //invalid input..........
            break;
        }
    }
    if (size == 0)
    {
        printf("Oh! no.. You haven't inserted any valid number\n");
    }
    else
    {
        printf("Your entered number are as follows..\n");
        for(int i=0; i<size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}