#include<stdio.h>
int main(){
	int a=1,b=1;
	int c=a||--b;
	printf("=%d %d %d\n",a,b,c);
	int d=a--&& --b;
	printf("=%d %d %d %d",a,b,c,d);
}