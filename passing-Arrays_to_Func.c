#include<stdio.h>

void pass2D(int rows, int cols, int arr[][cols])    //Formal Param
{
    int i , j;
    for (i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}


void myFunc(int *toto, int n )
{
    int i;
    for (i = 0; i < n; i++)
    {
        // printf("%d\n", toto[i]);
        printf("%d\n", *(toto+i));  
    }
}

void main()
{
    int myArray [] = {1, 8, 9, 7, 6, 77, 90, 54, 51, 12};
    myFunc(myArray, 10);


    int row=3, col=3;
    int arr[][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    pass2D(row, col, arr);
}