#include<bits/stdc++.h>
using namespace std;
bool checkFunky(int num){
    bool isFunky = false;
    for(int i=1; i<num; i++){
        if(2*num == i*(i+1)){
            isFunky = true;
            break;
        }
    }
    return isFunky;
}
int main(){
    int num;
    cin>>num;
    bool isCool = false;
    for(int i=1; i<num; i++){
        for(int j=1; j<num; j++){
            if(checkFunky(i) && checkFunky(j)){
                if(num==i+j){
                    cout<<i<<" "<<j<<endl;
                    isCool = true;
                    break;
                }
            }
        }
        if(isCool)
            break;
    }
    if(isCool)
        cout<<"YES";
    else
        cout<<"NO";
    

} 