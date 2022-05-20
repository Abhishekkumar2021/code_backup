#include<stdio.h>
#include<stdlib.h>
int main(){
	float min=0,max=0,sum=0,t=4,avg,count=0;
	while(t--){
		int x;
		while(1){
			scanf("%d",&x);
			if(x==0)
				break;
			count++;
			if(x>max)
				max=x;
			if(x<min)
				min=x;
			sum+=x;
		}
		if(max==0 && min==0){
			printf("Maximum is'No sufficient data'\n");
			printf("Minimum is'No sufficient data'\n");
			printf("Average is'No sufficient data'\n");
		}
		else{
			avg=sum/count;
			printf("Maximum is %.2f\n", max);
			printf("Minimum is %.2f\n", min);
			printf("Average is %.2f\n", avg);
		}
	}
	return 0;
}
