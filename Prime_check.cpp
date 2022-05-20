#include<bits/stdc++.h>
using namespace std;
int isPrime(int N){
         if(N<=1)
         return 0;
 
        for(int i=2; i<N; i++){
            if(N%i==0)
            return 0;
        }
        return 1;
    }

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t=20;
    while(t--){
       int n;
    cin>>n;
    if(isPrime(n)==0)
        cout<<n<<" is not a prime number"<<endl;
    else 
        cout<<n<<" is a prime number\n"; 
    }
    
}