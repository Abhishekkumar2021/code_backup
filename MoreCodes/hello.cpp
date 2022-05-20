#include<bits/stdc++.h>
using namespace std;
int main(){
	char S[101],R[201];
	scanf("%s",S);
    int i=0,j=0;
	while(j<strlen(S)){
		if(S[j]<'0' || S[j]>'9'){
			j++;
			continue;
			
		}
		R[i]='a'+ S[j]-'0';
		R[i+1]='z'-(S[j]-'0');
		j++;
		i=i+2;
	}
    R[i]='\0';
    cout<<R;
}