#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  vector<int> arr;
  for(int i=0; i<s.size(); i++){
    int x=s[i]-'0';
    arr.push_back(x);
  }
  sort(arr.begin(),arr.end());
  for(int i=0; i<arr.size(); i++)
  cout<<arr[i]<<" ";
  return 0;
}
