#include<iostream>
using namespace std;
class myPair{
	int first;
	int second;
public:
	myPair(){
		first=0; 
		second = 0;
	}
	bool operator<(myPair P){
		if(first!=P.first) 
			return first<=P.first;
		else return second<=P.second;
	}
	void setElements(int a,int b){
		first = a;
		second = b;
	}
	void print(){
		cout<<first<<" "<<second<<endl;
	}


};
int main(){
	myPair p1;
	myPair p2;
	p1.setElements(1,2);
	p2.setElements(1,5);
	if(p1<p2) 
		cout<<" Nice"<<endl;

}
