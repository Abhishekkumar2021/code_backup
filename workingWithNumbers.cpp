#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159
#define loop(i,a,b) for(int i=a; i<b; i++)
#define pro(a) a*a //not better way
#define pro_good(a) (a)*(a)


int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    //starts writing your code from here
    // long long x = 123456789123456789;
    // cout<<x;
    int a = 123456789;
    long long b = a*a;
    cout << b << "\n"; // -1757895751  --> overflow of int range
    int x;
    while(cin>>x){
        cout<<sqrt(x)<<endl;
    } //thhis is the way we have to follow in case we don't know the number of inputs

    //Macros and related error
    loop(i,2,50)
    cout<<i;
    //error case
    cout<<pro(3+3) <<endl; //so how it is going to be interpreted is --> 3+3*3+3 --> and then get the answer as 15
    cout<<pro_good(3+3);
    

}