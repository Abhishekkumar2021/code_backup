#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int count = 1;
    while(T--){
        int N, D, C, M;
        cin >> N;
        cin >> D;
        cin >> C;
        cin >> M;
        cin.ignore();
        string s;
        getline(cin, s);
        int i;
        int dogCount = 0;
        for(int i =0; i<s.length(); i++){
            if(s[i]=='D'){
                dogCount++;
            }
        }
        if(dogCount==0){
            cout<<"Case #"<<count<<": "<<"YES"<<endl;
        }
        else{
            for(i=0; i<s.length(); i++){
                if(s[i]=='C'){
                    if(C>0){
                        C--;
                    }else{
                        break;
                    }
                }
                if(s[i]=='D'){
                        if(D>0){
                            D--;
                            C+=M;
                        }else{
                            break;
                        }
                }
            }
            if(i==N){
                cout<<"Case #"<<count<<": "<<"YES"<<endl;
            }else{
                cout<<"Case #"<<count<<": "<<"NO"<<endl;
            }
        }
        count++;
    }
    
}