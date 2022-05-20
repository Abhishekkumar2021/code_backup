#include<iostream> 
using namespace std;
void shiftOne(int arr[],int size){
	int temp = arr[0];
	for(int i = 0; i < size-1; i++){
        arr[i] = arr[i+1];
	}
	arr[size-1] = temp;
}
int main(){

	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter steps by which array is shifted left."<<endl;
	int d;
	cin>>d;
	int arr[n];
	cout<<"Enter elements of the array"<<endl;
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	
	for(int i = 0; i<d; i++) 
		shiftOne(arr,n);
	cout<<"array after shiftings"<<endl;
	for(int i = 0; i<n; i++)
		cout<<arr[i]<<" ";
}