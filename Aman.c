#include<stdio.h>
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x,n,i;
    float z,y;
    printf("input1");
    scanf("%d",&x);
    printf("input 2");
    scanf("%d",&n);
    y=1;
    z=1;
    for( i=0;i<=n;i++){
        y*=(x/i+1);
        z+=y;
    }
    
    printf("%f",z);
    return 0;

}