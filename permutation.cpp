#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
int count(int *arr,int left,int right){
  if(left>=right)
    return 0;
  if(left+1 = right){
    if(arr[left]<arr[right])
      return 1;
  }
  int mid = (left+right)/2;
  if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
    
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
     int finalCount = 0;
     vector<int> permutation;
     for (int i = 0; i < n; i++){
         permutation.push_back(i);
     }
     do{
         int count = 0;
         for(int i=0; i<permutation.size()-1; i++){
           if(permutation[i]<permutation[i+1])
            count++;
         }
         if(count>n)
          finalCount++;
        finalCount%=m;
     } while (next_permutation(permutation.begin(), permutation.end()));
     cout << finalCount <<"\n";

  }
 
  return 0;
}