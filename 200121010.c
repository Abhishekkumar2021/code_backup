#include <stdio.h>

int main(){ int r1, c1, r2, c2, r3, c3, r4, c4;
        printf("Enter the number of rows and columns of matrix 1");
        scanf("%d %d", &r1, &c1);
        printf("enter the first matrix");
        char a1[r1][c1];
        for(int i = 0; i<r1; i++){for(int j = 0; j<c1; j++){scanf("%c", &a1[i][j]);}}


        printf("Enter the number of rows and columns of matrix 2");
        scanf("%d %d", &r2, &c2);
        printf("enter the second matrix");
        char a2[r2][c2];
        for(int i = 0; i<r2; i++){for(int j = 0; j<c2; j++){scanf("%c", &a2[i][j]);}}




        printf("Enter the number of rows and columns of matrix 3");
        scanf("%d %d", &r3, &c3);
        printf("enter the third matrix");
        char a3[r3][c3];
        for(int i = 0; i<r3; i++){for(int j = 0; j<c3; j++){scanf("%c", &a3[i][j]);}}


        printf("Enter the number of rows and columns of matrix 4");
        scanf("%d %d", &r4, &c4);
        printf("enter the fourth matrix");
        char a4[r4][c4];
        for(int i = 0; i<r4; i++){for(int j = 0; j<c4; j++){scanf("%c", &a4[i][j]);}}


        int r5 = r1>r2?r1:r2 ;
        int c5 = c1 + c2 ;
        char image1[r5][c5];

        for(int i = 0; i < r5; i++){for(int j = 0; j<c5; j++){

         if(r1>r2){   if(i<r2 && j<= c1 ){ image1[i][j] = a1[i][j] ; }
                      if(i<r2 && j>c1){ image1[i][j] = a2[i][j - c1] ;}
                     if(i>r2 && j<=c1){ image1[i][j] = a1[i][j] ;



         }






        }

        }




}
