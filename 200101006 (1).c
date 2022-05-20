#include <stdio.h>
#include <stdlib.h>
int ***multiplication(int ***arr, int row, int col, int slice)
{
    int ***a;
    a = (int ***)calloc(2, sizeof(int **));
    for (int i = 0; i < 2; i++)
    {
        a[i] = (int **)calloc(row, sizeof(int *));
        for (int j = 0; j < row; j++)
        {
            a[i][j] = (int *)calloc(col, sizeof(int));
        }
    }
    //initialising all the elements of both the arrays by 0.
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            for (int k = 0; k < col; ++k)
            {
                a[i][j][k] = 0;
            }
        }
    }
    //this is matrix multiplication.
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            for (int k = 0; k < col; ++k)
            {
                a[0][i][j] += arr[0][i][k] * arr[1][k][j];
                a[1][i][j] += arr[1][i][k] * arr[2][k][j];
            }
        }
    }
    return a;
}
int main()
{
    int row, col, slice;
    scanf("%d %d %d", &row, &col, &slice);
    int ***arr = (int ***)calloc(slice, sizeof(int **));
    for (int i = 0; i < slice; i++)
    {
        arr[i] = (int **)calloc(row, sizeof(int *));
        for (int j = 0; j < row; j++)
        {
            arr[i][j] = (int *)calloc(col, sizeof(int));
        }
    }
    //taking input for the matrices.
    for (int i = 0; i < slice; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            for (int k = 0; k < col; ++k)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    int ***ptr = multiplication(arr, row, col, slice);
    printf("\nResult of matrix multiplication of slice 1 and 2------------- \n\n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%d	", ptr[0][i][j]);
        }
        printf("\n");
        printf("\n");
    }
    printf("Result of matrix multiplication of slice 2 and 3-------------\n\n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%d	 ", ptr[1][i][j]);
        }
        printf("\n");
        printf("\n");
    }
    //deallocation of dynamically allocated memory for arr.
    for(int i = 0; i < slice; i++){
        for(int j = 0; j < row; ++j){
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
    //deallocation of dynamically allocated memory for ptr.
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < row; ++j){
            free(ptr[i][j]);
        }
        free(ptr[i]);
    }
    free(ptr);
    return 0;
}
