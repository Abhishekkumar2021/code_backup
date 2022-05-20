#include <iostream>
using namespace std;
int main()
{
    char x, capital , small;
    cout<<"Enter your choice  :  ";
    cin>>x;
    if((x<='z') &&(x>='a'))
    {
       capital=x-'a'+'A' ;
        cout <<"your new version is :  ";
        cout<<capital;

    }
if((x<='Z')&&(x>='A'))
   {
       small=x-'A'+'a';
       cout<<"Your new version is :  ";
       cout<<small;
   }
    return 0 ;
}










