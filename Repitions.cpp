#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    string s;
    getline(cin,s);
    unordered_map<char,int> map;
    int count = 1;
    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            count++;
        }else{
            map.insert(make_pair(s[i],count));
            count=1;
        }
    }
    vector<int> counter;
    for(auto it : map){
        counter.push_back(it.second);
    }
    sort(counter.begin(), counter.end());
    cout<<counter[counter.size()-1]<<endl;
}