#include<stdio.h>
void main()
{
    int row, col;
    int i = 0, j = 0;
    printf("Enter your row & columns\n");
    scanf("%d %d", &row, &col);

    int myArray [row][col];

    printf("Please enter the inputs for the matrix: ");

    for(i = 0; i < row; i++) {
        for (j = 0; j < col; j++){
            printf("myArray[%d][%d]: \n",i, j );
            scanf("%d", &myArray[i][j]);
        }
    }
    printf("Your entered array is shown below: \n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    int transpose[col][row];

    for (i = 0; i < col; i++){
        for (j = 0; j < row; j++) {
            transpose[i][j] = myArray[j][i];
        }
    }

    printf("Your Transposed Array is shown below: \n");
    for (i = 0; i < col; i++) {
        for(j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }



}