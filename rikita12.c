/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define M 100
#define N 100
#define O 100
int ***do_task_4(int ***arr,int row,int col,int slice){
    int ***B = (int ***)calloc(2, sizeof(int **));
    for (int i = 0; i < 2; i++){
        B[i] = (int **)calloc(row, sizeof(int *));
        for (int j = 0; j < row; j++){
            B[i][j] = (int *)calloc(col, sizeof(int));
        }
    }

    //this is matrix subtraction.
     for (int j = 0; j < row; ++j){
            for (int k = 0; k < col; ++k){
                B[0][j][k] = arr[1][j][k]-arr[0][j][k] ;
                B[1][j][k] = arr[2][j][k]-arr[1][j][k] ;
            }
        }

     return B;
}
int main()
{
    int*** A = (int***)calloc(M , sizeof(int**));
    for (int i = 0; i < M; i++)
    {
        A[i] = (int**)calloc(N , sizeof(int*));
        for (int j = 0; j < N; j++)
        {
            A[i][j] = (int*)calloc(O , sizeof(int));
        }
    }
    
    FILE* ptr = fopen("week12-ML2-input4.txt","r");
    int r,c,m,i,j,k;
    char s[100]; 
    fscanf(ptr,"%s",s);
    r = atoi(s);
    fscanf(ptr,"%s",s);
    c = atoi(s);
    fscanf(ptr,"%s",s);
    m = atoi(s);
    for(i=0;i<m;++i){
        for(j=0;j<r;++j){
            for(k=0;k<c;++k){
                fscanf(ptr,"%s",s);
                A[i][j][k] = atoi(s);
            }
        }
    }
    int ***B = do_task_4(A,r,c,m);
    for(int i=0; i<2; i++){
      for(j=0;j<r;++j){
        for(k=0;k<c;++k){
            printf("%d ",B[i][j][k]);
        }
        printf("\n");
      }
     printf("\n");

    }
    for ( i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++) {
            free(A[i][j]);
        }
        free(A[i]);
    }
    free(A);
    for(int i=0;i<3;++i){
        for(j=0;j<c;++j){
            free(B[i][j]);
        }  
    }
    free(B);
    return 0;
}
