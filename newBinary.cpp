#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int array[] = {10,2,3,4,5,0,7,3,90};
  int n = sizeof(array)/sizeof(int);
  int k = 0;
  int x = 3;
  for (int b = n/2; b >= 1; b /= 2) {
     while (k+b < n && array[k+b] <= x) 
      k += b;
  }
  if (array[k] == x) {
  // x found at index k
  cout<<k<<endl;
  }
  return 0;
}