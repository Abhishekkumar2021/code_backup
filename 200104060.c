#include <stdio.h>
#include <stdlib.h>

int*** returnAns(int*** input, int row, int col, int matrixes);

int main(void) {
  int r, c, m;

  int*** ptr;
  scanf("%d",&r);
  int x=r+3;
  int a[x];
  for (int i=0;i<x;i++)
  {
      scanf("%d",&a[i]);
  }
  int row;
  row=r/3;
  int col=r/3;
  int matrixes=r/3;
  ptr = (int**)calloc(row, sizeof(int*));
  for(int i=0; i<row; i++){
      ptr[i] = (int*)calloc(col, sizeof(int));
      for(int j=0; j<col; j++){
          ptr[i][j] = (int*)calloc(matrixes, sizeof(int));
      }
  }

int l=0;
  for(int a1=0; a1<matrixes; a1++){
      for(int i=0; i<row; i++){
          for(int j=0; j<col; j++){
             ptr[i][j][a1]=a[l];
             l=l+1;
          }
      }
  }

    int*** ans = returnAns(ptr, row, col, matrixes);

    for(int k=0; k<matrixes; k++){
        for(int i=0; i<(row-1); i++){
            for(int j=0; j<col; j++){
                 printf("%d ",ans[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


  for(int i=0; i<row; i++){
      for(int j=0; j<col; j++){
          free(ptr[i][j]);
      }
      free(ptr[i]);
  }
  free(ptr);


  return 0;
}

int*** returnAns(int*** ptr, int row, int col, int matrixes){
    int*** ans = (int*)calloc(row-1, sizeof(int*));
  for(int i=0; i<row; i++){
      ans[i] = (int*)calloc(col, sizeof(int));
      for(int j=0; j<col; j++){
          ans[i][j] = (int*)calloc(matrixes, sizeof(int));
      }
  }



    for(int i=0; i<(row-1); i++){
        for(int j=0; j<col; j++){
            for(int k=0; k<matrixes; k++){
                ans[i][j][k] = ptr[i][j][k] + ptr[i+1][j][k];
            }
        }
    }

    return ans;
}

