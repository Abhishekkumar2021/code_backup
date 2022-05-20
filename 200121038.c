#include<stdio.h>
#include<stdlib.h>

int ***reverse(int *pnt1){

    int R,C,S;
    // R = row, C = coloum , S = slice
    scanf("%d%d%d",&R,&C,&S);

    int n=R*C*S;

    // Creating a triple pointer as ____ pnt1
    // Whereas dynamically allocating memory to the assigned pointer ____ pnt1

    int ***a = (int ***)calloc(S, sizeof(int **));

    pnt1[n]=R;
    pnt1[n+1]=C;
    pnt1[n+2]=S;

    for (int i = 0; i <S; i++){
        a[i] = (int **)calloc(R, sizeof(int *));
        for (int j = 0; j < R; j++){
            a[i][j] = (int *)calloc(R, sizeof(int));
        }
    }

    int x=0;
    for(int i = 0; i <R; i++){
         for(int j=0; j<C; j++){
             for(int k=0; k<S; k++){
                 a[k][i][j]=pnt1[x];
                 x++;
             }
         }
    }
    return a;
}
int main(){

    int size;
    scanf("%d",&size);

    int *arr=(int*)calloc((size+3),sizeof(int));
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    int ***pnt2 = reverse(arr);
    for(int i = 0; i < arr[size +2]; i++){
        for (int j = 0; j < arr[size]; j++){
            for (int k = 0; k < arr[size+1]; k++){
                printf("%d ", pnt2[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    for (int i = 0; i < arr[size+2]; i++){
        for (int j = 0; j < arr[size]; j++){
            free(pnt2[i][j]);
        }
        free(pnt2[i]);
    }
    free(pnt2);
    free(arr);
}
