#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    while(n!=1) {
        cout<<n<<" -> ";
        if(n%2==0)
        n/=2;
        else
        n = n*3 +1;
    }
    cout<<1;
    return 0;
}