#include<bits/stdc++.h>
using namespace std;
int main(){
   int sum = 0;
   char k = 'a';
   while(1){
   	int x;
   	cin>>x;
   	sum+=x;
    k = getchar();
    if(k==' ')
    	break;
   }
   cout<<"sum =  "<<sum<<endl;
}