#include<iostream>
using namespace std;
int main(){
    int x = 10;
    for(int i=31; i>=0; i++){
        if(x&(1<<i)){
            cout<<1;
        }else
        cout<<0;
    }
}