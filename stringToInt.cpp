#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int strToInt(string s){
	int result = 1;
	int l = s.length();
	for(int i=0; i<l; i++){
		int digit = s[l-1-i] -'0';
		result = result + digit*pow(10,i);
	}
	return result;
}
int main(){
	int a = strToInt("1234");
	cout<<a;
}