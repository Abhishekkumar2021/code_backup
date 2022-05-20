#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    int n;
    cin>>n;
    if(n<=4){
        cout<<"NO SOLUTION\n";
    }
    else{
        if(n%2==1)
        cout<<n/2+1<<" ";
        else{
            cout<<n/2<<" ";
        }
        for(int i=1; i<=n; i++){
            int a = n-i+1;
            int b = i;
            if(a-b>1){
                cout<<a<<" "<<b<<" ";
            }
        }
        if(n%2==0){
            cout<<n/2+1;
        }
    }

}