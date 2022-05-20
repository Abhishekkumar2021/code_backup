#include<stdio.h>
int maximum(int x,int y){
    int max=0;
    max=(x>y)?x:y;
    return max;

}
int main(){
    int r1,r2,r3,r4,c1,c2,c3,c4;
    scanf("%d %d",&r1,&c1);
    char a1[r1][c1];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%c",&a1[i][j]);
        }
    }
     scanf("%d %d",&r2,&c2);
     char a2[r2][c2];
     for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%c",&a2[i][j]);
        }
    }
     scanf("%d %d",&r3,&c3);
     char a3[r3][c3];
     for(int i=0; i<r3; i++){
        for(int j=0; j<c3; j++){
            scanf("%c",&a3[i][j]);
        }
    }
     scanf("%d %d",&r4,&c4);
     char a4[r4][c4];
     for(int i=0; i<r4; i++){
        for(int j=0; j<c4; j++){
            scanf("%c",&a4[i][j]);
        }
    }
    int r12=maximum(r1,r2);
    char a12[r12][c1+c2];
    for(int i=0; i<r12; i++){
        for(int j=0; j<c1; j++){
            if(i<r1)
            a12[i][j]==a1[i][j];
            else
            a12[i][j]='*';
        }
        for(int j=c1; j<c1+c2; j++){
            if(i<r2)
            a12[i][j]==a2[i][j];
            else
            a12[i][j]='*';
        }
    }
    int r34=maximum(r3,r4);
    char a334[r34][c3+c3+c4];
    for(int i=0; i<r34; i++){
        for(int j=0; j<c3; j++){
            if(i<r3)
            a334[i][j]==a3[i][j];
            else
            a334[i][j]='*';
        }
         for(int j=c3; j<2*c3; j++){
            if(i<r3)
            a334[i][j]==a3[i][j];
            else
            a334[i][j]='*';
        }
        for(int j=2*c3; j<c3+c3+c4; j++){
            if(i<r4)
            a334[i][j]==a2[i][j];
            else
            a334[i][j]='*';
        }
    }
    int col=maximum((c1+c2),(c3+c3+c4));
    char final[r34+r12][col];
    for(int i=0; i<r12; i++){
        for(int j=0; j<col;){
            if(j<c1+c2)
            final[i][j]=a12[i][j];
            else
            final[i][j]='*';
        }

    }
    for(int i=r12; i<r12+r34; i++){
        for(int j=0; j<col;){
            if(j<c3+c3+c4)
            final[i][j]=a334[i][j];
            else
            final[i][j]='*';
        }

    }
    for(int i=0; i<r12+r34; i++){
        for(int j=0; j<col;j++){
            printf("%c",final[i][j]);
        }
        printf("\n");
    }
   return 0;
    }
