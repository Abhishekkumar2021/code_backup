#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
     int sum(int,int); //prototype.
     cout<<sum(2,5);//function call

     return 0;
}
 int sum(int x,int y){    //definition.
 int add;
 add=x+y;
 return add;
 }

