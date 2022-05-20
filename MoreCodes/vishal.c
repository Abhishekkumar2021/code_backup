#include <stdio.h>
#include <stdlib.h>
int ***subtract(int ***arr, int row, int col, int slice)
{

    int ***a = (int ***)calloc(2, sizeof(int **));
    for (int i = 0; i < 2; i++){
        a[i] = (int **)calloc(row, sizeof(int *));
        for (int j = 0; j < row; j++){
            a[i][j] = (int *)calloc(col, sizeof(int));
        }
    }

    //this is matrix subtraction.
     for (int j = 0; j < row; ++j){
            for (int k = 0; k < col; ++k){
                a[0][j][k] = arr[1][j][k]-arr[0][j][k] ;
                a[1][j][k] = arr[2][j][k]-arr[1][j][k] ;
            }
        }
    
    return a;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
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
    int ***ptr = subtract(arr, row, col, slice);
    //printing the matrix we get after subtraction....
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
