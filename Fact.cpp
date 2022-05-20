#include <bits/stdc++.h>
#include<string.h>
using namespace std;


int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--){
	    char fact[100] ;
	    strcpy(fact,"1");
	    int n;
	    cin>>n;
	    for(int i=1; i<=n; i++){
	        char arr[100];
	        sprintf(arr,"%ld",i*1L*atoi(fact));
	        strcpy(fact,arr);
	    }
	   cout<<fact<<endl;
	}
	return 0;
}