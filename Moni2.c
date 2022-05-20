#include <stdio.h>
#include <stdlib.h>
int ***transpose(int ***arr, int row, int col, int slice)
{

    int ***a = (int ***)calloc(slice, sizeof(int **));
    for (int i = 0; i < slice; i++){
        a[i] = (int **)calloc(row, sizeof(int *));
        for (int j = 0; j < row; j++){
            a[i][j] = (int *)calloc(col, sizeof(int));
        }
    }

    //this is matrix transpose.
    for (int i = 0; i < slice; ++i){
        for (int j = 0; j < row; ++j){
            for (int k = 0; k < col; ++k){
                a[i][j][k] = arr[i][k][j] ;
            }
        }
    }
    return a;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int row, col, slice;
    scanf("%d %d %d", &row, &col, &slice);
    int ***arr = (int ***)calloc(slice, sizeof(int **));
    for (int i = 0; i < slice; i++){
        arr[i] = (int **)calloc(row, sizeof(int *));
        for (int j = 0; j < row; j++){
            arr[i][j] = (int *)calloc(col, sizeof(int));
        }
    }
    //taking input for the matrices.
    for (int i = 0; i < slice; ++i){
        for (int j = 0; j < row; ++j){
            for (int k = 0; k < col; ++k){
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    int ***ptr = transpose(arr, row, col, slice);
    //printing the 1st and 2nd matrices of multidimensional transpose matrix.
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < row; ++j){
            for(int k=0; k<col; ++k){
                printf("%d  ",ptr[i][j][k]);
            }
            printf("\n");
        }
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
