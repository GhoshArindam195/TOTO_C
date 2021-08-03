#include<stdio.h>
void main()
{
    int row, col;
    printf("Enter your rows & cols:\n");
    scanf("%d%d", &row, &col);
    int arr1[row][col], arr2[row][col];
    int ans[row][col];

    printf("Enter your %d elements for Array 1",row*col);
    //Taking input for Arr1...............
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter your %d elements for Array 2",row*col);
    //Taking input for Arr2...............
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    //Showing array1.....
    printf("your array1 is shown below:\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    //Showing array2.....
    printf("your array2 is shown below:\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    //Addition of two arrays and storing to the ans array...
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            ans[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("your ans array is shown below:\n");
    //Displaying Ans array......... 
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

}