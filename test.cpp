// A program which gives SUM of ASCII values of your FULL NAME.
#include<iostream>
using namespace std;
int main(){
  int sum=0;
  string full_name;
  getline(cin, full_name);
  int len = full_name.size();
  for(int i=0; i<len; i++){
      if(full_name[i]!=' '){
          sum+=full_name[i];
      }
  }
  cout<<"SUM of ASCII values of your FULL NAME(Case Sensitive) : "<<sum<<endl;
  return 0;
}
