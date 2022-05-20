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
	char *student_name ;
	char *course_id ;
	char *course_name;

};

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n;                                   //number of students.
	scanf("%d",&n);
	struct student *stu;
	stu = (struct student *) malloc(n*sizeof(struct student));
	for(int i=0; i<n; i++){
		stu[i].student_name = (char*)calloc(100,sizeof(char));
		stu[i].course_id = (char*)calloc(6,sizeof(char));
		stu[i].course_name = (char*)calloc(100,sizeof(char));
	}

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
	int y = 0;
	for(int i=0; i<n; i++){
		if(stu[i].course_id[2]<'4'){
			 strcpy(input[y],stu[i].course_id);
			 y++;
		}
    
	}
	int x = distinctIDs(input,y,output);
	printf("Distinct HSS Electives which are < 400 level........\n");
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
