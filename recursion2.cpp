#include<bits/stdc++.h>
using namespace std;

void print(int x){
  cout<<x;
  print(x);
}

int main(){
  print(0);
}
