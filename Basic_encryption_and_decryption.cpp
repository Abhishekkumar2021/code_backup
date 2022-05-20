#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen(   "output,txt","w",stdout);
    string str = "Hello world";
    for(int i=0; i<str.size(); i++){
        str[i] = str[i]^10;
    }
    cout<<str;
    for (int i = 0; i < str.size(); i++){
        str[i] = str[i] ^ 10;
    }
    cout << endl<<str;
    //if we do XOR operation even times then its value doesn't change.
}
