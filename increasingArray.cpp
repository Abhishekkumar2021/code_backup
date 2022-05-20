#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    int n;
    cin>>n;
    int arr[n];
    int moves = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i+1]<arr[i]){
            moves+= arr[i] - arr[i+1];
        }
    }
    cout<<moves<<endl;
}