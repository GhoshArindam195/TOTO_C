#include<stdio.h>
void main()
{
    int arr[10];//0->9  //array declarion

    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);   //array input
    }

    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);  //array fetching output
    }    

}