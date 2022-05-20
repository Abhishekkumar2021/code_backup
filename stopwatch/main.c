#include <stdio.h>

int main(){
    int row,col,num;
    scanf("%d %d %d",&row,&col,&num);
    char arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<=col; j++){
            scanf("%c",&arr[i][j]);
        }
    }
   char b[row][col];
   switch(num){
        case 1 :   for(int i=0; i<row; i++){
                      for(int j=0; j<col; j++){
                         b[i][j] = arr[row-i-1][j];
                          printf("%c",b[i][j]) ;
                        }
                   }
                   break;
    }
    return 0;
}
