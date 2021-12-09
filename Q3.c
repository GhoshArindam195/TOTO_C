#include <stdio.h>
#include <limits.h>

void main()
{
    int input;
    printf("Please enter the array size: ");
    scanf("%d", &input);
    int arr[input];

    printf("PLease enter the values: \n");
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<input/2; i++)
    {
        int maxIndex=-1;
        int max=INT_MIN;
        for(int j=i+1; j<input; j++)
        {
            if(arr[j]>max)
            {
                max = arr[j];
                maxIndex = j;
            }
        }
        if(arr[i]<max)
        {
            int temp = arr[i];
            arr[i]=max;
            arr[maxIndex]=temp;
        }
    }

    for(int i=0; i<input; i++)
    {
        printf("%d ", arr[i]);
    }
}