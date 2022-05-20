#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class regression{
	vector<float> x; //this is a dynamic arrary which is going to contain all (i-th x)
	vector<float> y;  //this is a dynamic arrary which is going to contain all (i-th y)
	float coeff;  // this variable is to store the coefficient/slope in the best fitting line 
	float constTerm;  // this variable is to store the constant term in the best fitting line 
	float sum_xy;  //this variable contains sum of product of all (i-th x) and (i-th y)
	float sum_x; //this variable contains sum of all (i-th x)
	float sum_y; //this variable contains sum of all (i-th y)
	float sum_x_square;  //this variable contains sum of square of all (i-th x)
	float sum_y_square;  //this variable contains sum of square of all (i-th y)
public:
	regression(){  // this is a constructor to provide the default values to all the terms in 
	            	//the object of class regression
		coeff = 0;
		constTerm = 0;
		sum_y= 0;
		sum_y_square = 0;
		sum_x_square = 0;
		sum_x = 0;
		sum_xy = 0;
	}
	void calculateCoefficient(){  //a function that calculate the coefficent/slope of the best fitting line
		float N = x.size();
		float numerator = N*sum_xy -sum_x*sum_y;
		float denominator = N*sum_x_square - sum_x*sum_x;
		coeff = numerator/denominator; 
	}
	void calculateConstantTerm(){  // this is a member function that will calculate the constant term 
		                          //of the best fitting line
		float N = x.size();
		float numerator = sum_y*sum_x_square - sum_x*sum_xy;
		float denominator = N*sum_x_square - sum_x*sum_x;
        constTerm = numerator/denominator; 
	}
	int sizeOfData(){  // a function that return the number of entries (xi,yi) in the data set
		return x.size();
	}
	float coefficient(){  // a function that return the coeffecient/slope of the best fitting line
		if(coeff == 0)
		calculateCoefficient();
		return coeff;
	}
	float constant(){ // a function that return the constant term of the best fitting line
		if(constTerm==0)
		calculateConstantTerm();
		return constTerm;
	}
	void PrintBestFittingLine(){   // a function that print the best fitting line
		if(coeff==0 && constTerm==0){
			calculateCoefficient();
			calculateConstantTerm();
		}
		cout<<"The best fitting lne is y = "<<coeff<<"x + "<<constTerm<<endl;
	}

	void takeInput(int n){  // a function to take input from the dataset 
		for(int i=0; i<n; i++){
			char comma;  // in a csv file all the values of xi and yi are seperated by commas 
			float xi;
			float yi;
			cin>>xi>>comma>>yi;
			sum_xy+=xi*yi;
			sum_x+=xi;
			sum_y+=yi;
			sum_x_square+=xi*xi;
			sum_y_square+=yi*yi;
			x.push_back(xi);
			y.push_back(yi);
		}
	}
	showData(){  // a function to show the data set
		for(int i=0; i<62; i++){
			printf("_");
		}
		printf("\n\n");
		printf("|%15s%5s %15s%5s%20s\n","X","","Y","","|");
		for(int i=0; i<x.size(); i++){
			printf("|%20f %20f%20s\n",x[i],y[i],"|");
		}
		for(int i=0; i<62; i++){
			printf("_");
		}
		printf("\n");
	}
	float predict(float x){  // a function to predict the value correspondng to some input
		return coeff*x + constTerm;
	}
	float errorSquare(){  // this is a function that returns overall sum of square of errors 
		float ans = 0;
		for(int i=0; i<x.size(); i++){
			ans += (predict(x[i]) - y[i])*(predict(x[i]) - y[i]); 
		}
		return ans;
	}
	float errorIn(float num){  // this is a functions that return the error i.e the difference
	                          // between the actual value and value predicted by our model
		for(int i=0; i<x.size(); i++){
			if(num==x[i]){
				return y[i] -  predict(x[i]);
			}
		}
		return 0;
	}
};
int main(){
	freopen("input.txt","r",stdin);
	regression reg;
	int n; // the number of pairs of (xi,yi) in the dataset
	cin>>n;
	reg.takeInput(n); //calling function takeInput to take input of n pairs 
	reg.showData();
	reg.PrintBestFittingLine();  // printing the best fitting line
	cout<<"Predicted value at 2060 = "<<reg.predict(2060)<<endl;
	cout<<"The errorSquared  = "<<reg.errorSquare()<<endl;
	cout<<"Error in 2050 = "<<reg.errorIn(2050)<<endl;
}