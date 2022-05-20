#include<stdio.h>
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0; i<x; i++){
        scanf("%d",&a[i]);
    }
    int row, col, slice,m=0;
    scanf("%d %d %d",&row,&col,&slice);
    int b[slice][row][col],c[slice][row][col];
    for(int i=0; i<slice; i++){
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++){
                b[i][j][k] =a[m];
                m++;
            }
        }
    }
    for(int i=0; i<row; i++){
       c[0][i][0]=b[2][0][i];
       c[0][i][1]=b[1][0][i];
       c[0][i][2]=b[0][0][i];

    }
   for(int i=0; i<slice; i++){
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++){
                printf("%d ",c[i][j][k]);
            }
            printf("\n");
        }
          printf("\n");
    }
    return 0;
  }
