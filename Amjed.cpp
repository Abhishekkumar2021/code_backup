#include<bits/stdc++.h>
using namespace std;
void printUptoOne(int n) {
    for(int i=1; i<=n; i++) 
    cout<<i<<" ";
    cout<<"\n";
}
bool isPrime(int n) {
    for(int i=2; i*i<=n; i++){
        if(n%i==0) 
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=n-1; i>=0; i--){
            if(!isPrime(sum)){
                printUptoOne(i+1);
                break;
            }else{
                sum-=arr[i];
            }
        }

    }
}