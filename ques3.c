#include<stdio.h>
float harmonic(int n){
	if(n==1)
		return 1;
	 return harmonic(n-1) + 1/(float)n;
}

int main(){
	int t=5;
	while(t--){
        printf("Test Case# %d:\n",5-t);
		float n;
		scanf("%f",&n);
		if(n<0)
			printf("Invalid number. N should be an unsigned number.	'n");
		if((int)n!=n)
			printf("Invalid number. N should be an integer number.\n");
		else{
			printf("H_%d = %f\n",n,harmonic(n));
		}

   }
  return 0;
}