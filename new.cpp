#include<bits/stdc++.h>
using namespace std;

struct student
{
    int *num;
    char *arr;
};

int main(){
    student s;
    s.num = new int[10];
    s.arr = new char[200];
    int x;
    cin>>x;
    for(int i=0; i<10; i++){
        cin>>s.arr[i];
    }
      cin.ignore();
    for(int i=0; i<x; i++){
        char str[10];
        getline(cin,s.arr);
        for (int j = 0; j < 10; j++)
        {
            str[j] = s.arr[s.num[j]];
        }
        for (int j = 0; j < 10; j++)
        {
           cout<<str[9-j];
        }
        cout<<endl;

    }
}