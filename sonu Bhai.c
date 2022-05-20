#include<stdio.h>
int ncr(int n, int r){
	if(n<r)
		return 0;
	else if(n<0 && r<0)
		return -1;
	else{
          if(r==0)
          	return 1;
          else return ncr(n-1,r)+ncr(n-1,r-1);
		}
}
int main(){
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int t=5;
	while(t--){
		printf("Test Case# %d:\n",5-t);
		float n,r;
		scanf("%f%f",&n,&r);
		int ans = ncr(n,r);
		if(ans==0)
			printf("Invalid input, n should be greater than or equal to r. \n");
		if(ans == -1)
			printf("Invalid input, n (or) r should be unsigned numbers");
	    if((int)n!=n && (int)r!= r)
	    	printf("Invalid input, n and r both should be integer numbers\n");
	    else
	    printf("C(n,r) = %d\n",ncr(n,r));
	}
}