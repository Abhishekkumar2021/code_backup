/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,dig_sum=0;
        cin>>n;
        while(n>0)
        {
         dig_sum+=n%10;
         n/=10;
        }
        cout<<dig_sum<<endl;
    }
}
*/
#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1 +" " +s2;
    cout<<endl;
    if(s1==s2)
        cout<<"equal";
    else
        cout<<"not equal";
}

