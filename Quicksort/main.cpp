#include <iostream>

using namespace std;
int partition(int arr[],int l,int r){
 int count=0;
 for(int i=0; i<r-l+1;i++){
    if(arr[0]>arr[i])
        count++;
 }
 int temp = arr[0];
 arr[0] = arr[l+count-1];
 arr[l+count-1] = temp;
 int i=l,j=r;
 while(i<count && j>count){
    if(arr[i]<arr[l+count-1]){
    i++;
 }
 else if(arr[j]>=arr[l+count-1]){
    j--;
 }
 else{
    int x=arr[i];
    arr[i]=arr[j];
    arr[j]=x;
  }
 }
 return l+count;
}
void quicksort(int arr[],int l, int r){
  if(l>=r)
    return;
  int c = partition(arr,l,r);
  quicksort(arr,l,c-1);
  quicksort(arr,c+1,r);
}
int main()
{

    int array[100];
    int size;
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    quicksort(array,0,size-1);
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}
