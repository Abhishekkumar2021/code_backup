#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    int n;
    cin>>n;
    int found[n+1];
    found[0] = 1;
    for(int i=0; i<n-1; i++){
        int x ;
        cin>>x;
        found[x]=1;
    }
    for(int i=0; i<=n; i++){
        if(found[i]!=1){
            cout<<i;
            break;
        }
    }

}