#include<stdio.h>
#include<stdlib.h>
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
	struct student stu[n];
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
      for(int i=0; i<n; i++){
    	int x=(stu[i].roll_number/1000)%100;
    	if(x==03){
    		printf("%-20d",stu[i].roll_number);
    		printf("%-30s",stu[i].student_name);
    		printf("%s\n",stu[i].course_id);
    	}

    }
    return 0;
}
