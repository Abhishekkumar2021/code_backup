#include<stdio.h>
int main(){
    int x, p, q, r, m=0;;
    scanf("%d",&x);
    int arr[x];
    for(int i=0; i<x; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d %d",&r,&p,&q);
    int b[q][r][p],c[r][p][q];
    int i=0,j=0,k=0;
    while(i<q){
        while(j<r){
            while(k<p){
                b[i][j][k] =arr[m];
                m++;
                k++;
            }
            j++;
        }
        i++;
    }
    for( j=0; j<r; j++){
      for( i=0; i<p; i++){
      c[j][i][0]=b[2][j][i];
      c[j][i][1]=b[1][j][i];
      c[j][i][2]=b[0][j][i];
       
      }
    }
    i=j=k=0;
    while(i<q){
        while(j<r){
            while(k<p){
                printf("%d ",c[i][j][k]);
                k++;
            }
            j++;
            printf("\n");
        }
        i++;
        printf("\n");
    }
    return 0;
  }
