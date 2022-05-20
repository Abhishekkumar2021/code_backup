#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int distinctIDs(char **str,int x,char **output){
	if(x==0 )
		return 0;
	int ans = distinctIDs(str+1,x-1,output);
	if(ans==0){
		output[0] = str[0];
		return 1;
	}

	for(int i=0; i<ans; i++){
		if(strcmp(str[0],output[i])==0){
             return ans;
		 }
	}
	output[ans]=str[0];
	return ans+1;
}
struct student{
	int serial_number;
	int roll_number;
	char student_name[100] ;
	char course_id[6] ;
	char course_name[100];

};

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n;                                   //number of students.
	scanf("%d",&n);
	struct student stu[n];
   for( int i=0; i<n; i++){
       scanf("%d",&stu[i].serial_number);
       scanf("%d",&stu[i].roll_number);
       scanf("%[^,]%*c",stu[i].student_name);
       scanf("%[^,]%*c",stu[i].course_id);
       scanf("%[^\n]%*c",stu[i].course_name);
    }
   char **input,**output;
	input = (char**)malloc(n*sizeof(char*));
	output = (char**)malloc(n*sizeof(char*));
	for(int i=0; i<n; i++){
		input[i]=(char*)malloc(6*sizeof(char));
		output[i] = (char*)malloc(6*sizeof(char));
	}
	for(int i=0; i<n; i++){
     strcpy(input[i],stu[i].course_id);
	}
	int x = distinctIDs(input,n,output);
	printf("Different course_id are......\n");
	for(int i=0; i<x; i++){
		printf("%s\n",output[i]);
	}
	printf("\nStudent distribution........\n");
	for(int i=0; i<x; i++){
		int count = 0;
		for(int j=0; j<n; j++){
         if(strcmp(output[i],input[j])==0){
         	count++;
         }

		}
		printf("%s             %d\n",output[i],count);
	}
    return 0;
}
