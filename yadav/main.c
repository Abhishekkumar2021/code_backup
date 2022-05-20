#include<stdio.h>
float fact(int n){
	float fact=1;
	while(n>0){
       fact*=n;
       n--;
	}
	return fact;
}
float power(float x, int k){
float power=1;
	for(int i=0; i<k; i++ )
	power*=x;
	return power;
}
int main(){
	 #ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
	#endif
  int n;
  float x,sin=0;
  while(1){
    scanf("%f %d",&x,&n);
      if(x==0 && n==0){
      printf("End");
        break;
    }
    for(int i=1; i<=n; i++)
      sin+=power(-1.0,i-1)*power(x,2*i-1)/fact(2*i-1);
      printf("%.5f\n",sin);
  }
    return 0;
  }
