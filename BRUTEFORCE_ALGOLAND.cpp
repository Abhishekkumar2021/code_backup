//SONU KUMAR

#include<bits/stdc++.h>
using namespace std;

class batalion{
public:
	char code;
	int units;
	batalion(){
		code = ' ' ;
		units=0;
	}
};

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int N;
	cin>>N;
	int x,y;
	cin>>x>>y;
	int M;
	cin>>M;
	cin.ignore();
	cout<<N<<" "<<x<<" "<<y<<" "<<M;
	// batalion arr[M];

	// for(int i=0; i<M; i++){
	// 	char ch;
	// 	cin>>ch;
	// 	cout<<"hello";
	// 	arr[i].code=ch;
	// 	int u;
	// 	cin>>u;
	// 	arr[i].units=u;
	// 	cin.ignore();
	// }
	


}