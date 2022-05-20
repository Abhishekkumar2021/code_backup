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
void fillSaddle(int **numArray, char **charArray,int &N, int &x,int &y,int &count){
    if(N==2){
       numArray[x][y]=-1;
	   charArray[x][y]='*';
	   for(int i=0; i<N; i++){
		   for(int j=0; j<N; j++){
			   if(i!=x || j!=y)
			     numArray[i][j]=1;
				 charArray[i][j]='@';
		   }
	   }
	}

}


int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int N;
	cin>>N;
    int **numArray = new int*[N];
    char **charArray = new char*[N];
	for(int i=0; i<N; i++){
		numArray[i] = new int[N];
		charArray[i] = new char[N];
	}
	int x,y;
	cin>>x>>y;
	int M;
	cin>>M;
	cin.ignore();
	batalion *batArray = new batalion[M];
	for(int i=0; i<M; i++){
		char ch;
		cin>>ch;
		batArray[i].code=ch;
		int u;
		cin>>u;
		batArray[i].units=u;
		cin.ignore();
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			numArray[i][j]=0;
            charArray[i][j]=' ';
		}
	}
    int count=0; 
    fillSaddle(numArray,charArray,N,x,y,count);
    for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<numArray[i][j]<<" ";
		}
		cout<<endl;
	}

}