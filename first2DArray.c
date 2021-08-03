#include<stdio.h>
void main()
{
    int row=1, col=3;
    int arr[row][col];

    printf("Enter your %d elements", row*col);
    //Taking input...............
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //Printing elemnts...........
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
     
}