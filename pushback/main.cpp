/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s,rev;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            rev.push_back(s.[size()-1-i]);
        }
        cout<<rev<<endl;
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main () {
  string s,s_rev;
  getline(cin,s);
  for(int i=0; i<s.size(); i++)  {
      s_rev.push_back(s[s.size()-1-i]);
  }
  cout<<s_rev;
  return 0;
}
