#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	int serial_number;
	int roll_number; 
	char *student_name ;              //this is the "student" structre.
	char *course_id ;
	char *course_name;

};

int differentcourseID(char **str,int x,char **outarr){              /*this is a function that will return the number of
	                                                                diiferent strings in an array of strings.*/
	if(x==0 )
		return 0;
	int temp = differentcourseID(str+1,x-1,outarr);
	if(temp==0){
		outarr[0] = str[0];
		return 1;
	}

	for(int i=0; i<temp; i++){
		if(strcmp(str[0],outarr[i])==0){
             return temp;
		 }
	}
	outarr[temp]=str[0];
	return temp+1;
}


int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n;                                   //number of students.
	scanf("%d",&n);
	struct student *stu;                     //creating a student structre type pointer.
	stu = (struct student *) malloc(n*sizeof(struct student));        //dynamically allocating the size for student pointer.
	for(int i=0; i<n; i++){
		stu[i].student_name = (char*)calloc(100,sizeof(char));
		stu[i].course_id = (char*)calloc(6,sizeof(char));
		stu[i].course_name = (char*)calloc(100,sizeof(char));
	}

   for( int i=0; i<n; i++){
       scanf("%d",&stu[i].serial_number);
       scanf("%d",&stu[i].roll_number);
       scanf("%[^,]%*c",stu[i].student_name);                   //taking input for all of the elements in structre.
       scanf("%[^,]%*c",stu[i].course_id);
       scanf("%[^\n]%*c",stu[i].course_name);
    }
   char **strarr,**outarr;                              //creating two strings.
	strarr = (char**)malloc(n*sizeof(char*));
	outarr = (char**)malloc(n*sizeof(char*));
	for(int i=0; i<n; i++){
		strarr[i]=(char*)malloc(6*sizeof(char));
		outarr[i] = (char*)malloc(6*sizeof(char));
	}
	for(int i=0; i<n; i++){
     strcpy(strarr[i],stu[i].course_id);                       
	}
	int x = differentcourseID(strarr,n,outarr);
	printf("Different course IDs\n");
	for(int i=0; i<x; i++){
		printf("%s\n",outarr[i]);
	}
	printf("\nStudent distribution\n");
	for(int i=0; i<x; i++){
		int count = 0;
		for(int j=0; j<n; j++){
         if(strcmp(outarr[i],strarr[j])==0){
         	count++;
         }

		}
		printf("%s  <-------->  %d\n",outarr[i],count);
	}
    return 0;
}
