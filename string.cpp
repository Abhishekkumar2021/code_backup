#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  string str = "Abhishek kumar";
  cout<<str.substr(3)<<endl;
  cout << str.substr(3,5) << endl;
  cout<<str.find("shek")<<endl;
  return 0;
}