#include<iostream>
using namespace std;
int main(){
	//we have to calculate the square root of 10  i.e have to find the solution of x^2-10 = 0
	double x_zero = 10;
	double diff = 2*x_zero;
    double value = x_zero*x_zero;
    double new_x = x_zero - value/diff;
    cout<<new_x;

}