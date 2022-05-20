#include<bits/stdc++.h>
using namespace std;
void removeduplicate(char arr[], int size){
   if(size<=1)
    return;
    removeduplicate(arr+1,size-1);
    if(arr[0]==arr[1]){
      for(int i=0; arr[i]!='\0';i++)
       arr[i]=arr[i+1];
    }
    else
    return;
}
int main(){
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  // #endif
  char str[20];
  int size;
  cin>>size;
  cin>>str;
  removeduplicate(str,size);
  cout<<str;

}
