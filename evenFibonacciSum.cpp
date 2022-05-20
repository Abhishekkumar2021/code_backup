#include<bits/stdc++.h>
using namespace std;
int fib(int x){
    float phi = (sqrt(5) + 1) / 2;
    float phi_des = (sqrt(5) - 1) / 2;
    return (pow(phi,x)-pow(-phi_des,x))/sqrt(5);
}

int main(){
    // int n=2;
    // float phi = (sqrt(5)+1)/2;
    // float phi_des = (sqrt(5)-1)/2;
    // long sum = (phi * phi * (pow(phi, 3 * n) - 1) / (pow(phi, 3) - 1) + phi_des * phi_des*(pow(phi_des, 3 * n) - 1) / (pow(phi_des, 3) - 1));
    // cout<<sum<<"\n";
    // int x = 0;
    // while(fib(3*x+2)<100){
    //     x++;
    // }
    // cout<<"Number of even terms less than 100 are : "<<x<<"\n";
    long n = 100;
    // cin >> n;
    int x = 0;
    while (fib(3 * x + 2) < n)
    {
        x++;
    }
    x--;
    float phi = (sqrt(5) + 1) / 2;
    float phi_des = (sqrt(5) - 1) / 2;
    float sum = (phi * phi *phi* (pow(phi, 3 * x) - 1) / (pow(phi, 3) - 1) + phi_des * phi_des *phi_des* (pow(-phi_des, 3 * x) - 1) / (pow(-phi_des, 3) - 1)) / sqrt(5);
    cout << sum << "\n";
}