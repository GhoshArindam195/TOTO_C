#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter your %d elements\n", n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);


    printf("Enter the index you want to delete: \n");
    int index;
    scanf("%d", &index);

    for(int i=index+1; i<n; i++)
    {
        arr[i-1]=arr[i];
    }
    n-=1;

    printf("After deletion, your updated array is: \n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}