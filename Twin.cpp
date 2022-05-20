#include<bits/stdc++.h>
using namespace std;
int main(){
  int x;
  cin>>x;
  vector<int> v;
  for(int i=0; i<x; i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
  }
  sort(v.begin(),v.end());
  for(int i=0; i<v,size(); i++)
  cout<<v[i]<<" ";
}
