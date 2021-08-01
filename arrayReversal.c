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

    printf("You entered the below array:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for(int i=0, j=n-1; i<j; i++, j--)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    printf("After reversal, your array looks like this:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);


}