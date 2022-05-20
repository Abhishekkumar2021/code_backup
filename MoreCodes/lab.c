#include<stdio.h>
#include<stdlib.h>

int ***reverse(int *ptr){
    int n = sizeof(ptr)/sizeof(ptr[0]);      //getting the size of the array.
    int slice = ptr[n-1];
    int row = ptr[n-3];
    int col = ptr[n-2];
    int ***a = (int ***)calloc(slice, sizeof(int **));          //creating a triple pointer and dynamically allocating memory to it.
    for (int i = 0; i <slice; i++){
        a[i] = (int **)calloc(row, sizeof(int *));
        for (int j = 0; j < row; j++){
            a[i][j] = (int *)calloc(col, sizeof(int));
        }
    }
    int x=n-4;
    for(int i = 0; i <slice; i++){
         for(int j=0; j<row; j++){
             for(int k=0; k<col; k++){
                 a[i][k][j]=ptr[x];
                 --x;
             }
         }
    }
    return a;
}
int main(){
    int size;
    scanf("%d",&size);
    int *arr=(int*)calloc((size+3),sizeof(int));
    for(int i=0; i<size+3; i++){
        scanf("%d",&arr[i]);
    }
    int ***newptr = reverse(arr);
    for(int i = 0; i < arr[size +2]; i++){
        for (int j = 0; j < arr[size]; j++){
            for (int k = 0; k < arr[size+1]; k++){
                printf("%d ", newptr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    free(arr);
    for (int i = 0; i < arr[size+2]; i++){
        for (int j = 0; j < arr[size]; j++){
            free(newptr[i][j]);
        }
        free(newptr[i]);
    }
    free(newptr);
}