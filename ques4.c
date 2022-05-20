#include<stdio.h>
int MinR(int A[], int n)
{
    if (n == 1)
        return A[0];
    if(n<=0)
    	return -1;
    a = (A[n-1]< Min(A, n-1))? A[n-1]:Min(A, n-1);
    return a;
}

int Max(int A[], int n)
{
	if (n == 1)
        return A[0];
    if(n<=0)
    	return -1;
   a = (A[n-1]< Max(A, n-1))? A[n-1]:Max(A, n-1);
    return a;
}

int sum(int A[], int n){
	if (n == 1)
		return A[0];
	if(n<=0)
    	return -1;
	return A[n-1] + sum(A, n-1);
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int t=5;
	while(t--){
		printf("Test Case# %d:\n",5-t);
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0; i<n; i++){
			scanf("%d",&arr[i]);
		}
		if(n<0)
			printf("Input is not processable")
		else{
	    printf("Min : %d\n",Min(A, n));
	    printf("Max : %d\n",Max(A, n));
		printf("Sum : %d\n",sum(A, n));
		}
		

	}
}