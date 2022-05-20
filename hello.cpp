#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int x;
    for(int i=0; i<10; i++){
        cin>>x;
        cout<<x<<endl;
    }
    return 0;
}
