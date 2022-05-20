#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	string s;
	getline(cin,s);
	for(int i=0; i<s.size(); i++)
		s[i] = (s[i]^142);
	cout<<s<<endl;
	
}