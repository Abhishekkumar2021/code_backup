#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node{
  T data;
  Node *next;
  Node(){
      data = 0;
      next=NULL;
  }
  AddBegin(T item){
      Node *node=new Node;
      node->data = item;
      
  }
};
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  freopen("input.txt", "r",stdin);
  freopen("output.txt","w",stdout);

  return 0;
}