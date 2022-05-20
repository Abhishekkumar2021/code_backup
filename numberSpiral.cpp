#include<bits/stdc++.h>
using namespace std;
void fillRowCol(int **arr,int n,int index){
    if(index%2==1){  
        int num = index*index + 1;
        for(int i=0; i<=index; i++){
            arr[i][index] = num;
            num++;
        }
        for(int i=index-1; i>=0; i--){
            arr[index][i] = num;
            num++;
        }
    }else{
        int num = (index + 1)*(index + 1);
        for(int i=0; i<=index; i++){
            arr[i][index] = num;
            num--;
        }
        for(int i=index-1; i>=0; i--){
            arr[index][i] = num;
            num--;
        }
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    int n;
    cin>>n;
    int *spiral[n];
    for(int i=0; i<n; i++){
        spiral[i] = new int[n];
    }
    for(int i=0; i<n; i++){
        fillRowCol(spiral,n,i);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<spiral[i][j]<<" ";
        }
        cout<<"\n";
    }
}