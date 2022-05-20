#include <stdio.h>
#include <stdlib.h>
int ***minus(int ***Array, int R, int C, int S)
{
    
    int ***a = (int ***)calloc(2, sizeof(int **));
    for (int i = 0; i < 2; i++){
        a[i] = (int **)calloc(R, sizeof(int *));
        for (int j = 0; j < R; j++){
            a[i][j] = (int *)calloc(C, sizeof(int));
        }
    }

    //this is matrix subtraction.
     for (int j = 0; j < R; ++j){
            for (int k = 0; k < C; ++k){
                a[0][j][k] = Array[1][j][k]-Array[0][j][k] ;
                a[1][j][k] = Array[2][j][k]-Array[1][j][k] ;
            }
        }
    
    return a;
}
int main()
{

    int R, C, S;
    scanf("%d %d %d", &R, &C, &S);
    int ***Array = (int ***)calloc(S, sizeof(int **));
    for (int i = 0; i < S; i++){
        Array[i] = (int **)calloc(R, sizeof(int *));
        for (int j = 0; j < R; j++){
            Array[i][j] = (int *)calloc(C, sizeof(int));
        }
    }
    //taking input for the matrices.
    for (int i = 0; i < S; ++i){
        for (int j = 0; j < R; ++j){
            for (int k = 0; k < C; ++k){
                scanf("%d", &Array[i][j][k]);
            }
        }
    }
    //creating a new triple pointer to get the address of the multidimensional array return by the function.
    int ***newArray = minus(Array, R, C, S);
    //printing the matrix we get after minusion....
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < R; ++j){
            for(int k=0; k<C; ++k){
                printf("%d  ",newArray[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    //deallocation of dynamically allocated memory for Array.
    for(int i = 0; i < S; i++){
        for(int j = 0; j < R; ++j){
            free(Array[i][j]);
        }
        free(Array[i]);
    }
    free(Array);
    //deallocation of dynamically allocated memory for newArray.
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < R; ++j){
            free(newArray[i][j]);
        }
        free(newArray[i]);
    }
    free(newArray);
    return 0;
}
