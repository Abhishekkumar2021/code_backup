#include<stdio.h>
int main(){
	int r1,c1,r2,c2;
	scanf("%d %d",&r1,&c1);
	int first[r1][c1];
	for(int i=0; i<r1; i++){
		for(int j=0; j<c1; j++)
		scanf("%d",*(first+i)+j);
	}

	scanf("%d %d",&r2,&c2);
	int second[r2][c2];
	for(int i=0; i<r2; i++){
		for(int j=0; j<c2; j++)
	    	scanf("%d",*(second+i)+j);
	}
	
	int first_transpose[c1][r1],second_transpose[c2][r2];
	for(int i=0; i<c1; i++){
		for(int j=0; j<r1; j++)
	         *(first_transpose[i]+j)=*(first[j]+i);
	}
	
	for(int i=0; i<c2; i++){
		for(int j=0; j<r2; j++)
	         *(second_transpose[i]+j)=*(second[j]+i);
	}
	
	if(r1==c2 && r2==c1){
	for(int i=0; i<r1; i++){
		for(int j=0; j<c1; j++){
	         int temp = *(second_transpose[i]+j);
	         *(second_transpose[i]+j) = *(first[r1-i-1]+j);
	         *(first[r1-i-1]+j)= temp;
		 }
	   }
	   
	for(int i=0; i<r2; i++){
		for(int j=0; j<c2; j++){
	         int temp = *(first_transpose[i]+j);
	         *(first_transpose[i]+j)=*(second[r2-i-1]+j);
	         *(second[r2-i-1]+j)= temp;
		  }
	   }
	}
	
	for(int i=0; i<r1; i++){
		for(int j=0; j<c1; j++)
	      printf("%d ",*(first[i]+j));
	      printf("\n");
	}
	
	printf("\n");
	for(int i=0; i<r2; i++){
		for(int j=0; j<c2; j++)
	      printf("%d ",*(second[i]+j));
	      printf("\n");
	}
	
	printf("\n");
	for(int i=0; i<c1; i++){
		for(int j=0; j<r1; j++)
	      printf("%d ",*(first_transpose[i]+j));
	      printf("\n");
	}
	
	printf("\n");
	for(int i=0; i<c2; i++){
		for(int j=0; j<r2; j++)
	      printf("%d ",*(second_transpose[i]+j));
	      printf("\n");
	}
}