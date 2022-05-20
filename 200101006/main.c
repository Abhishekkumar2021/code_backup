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
	int n;                                   //number of students.
	scanf("%d",&n);
	struct student stu;
	for(int i=0; i<n; i++){
		stu.student_name = (char*)calloc(100,sizeof(char));
		stu.course_id = (char*)calloc(6,sizeof(char));
		stu.course_name = (char*)calloc(100,sizeof(char));
	}
    printf("ROLL NUMBER         STUDENT NAME                  COURSE ID\n");
    for( int i=0; i<n; i++){
       scanf("%d",&stu.serial_number);
       scanf("%d",&stu.roll_number);
       scanf("%[^,]%*c",stu.student_name);
       scanf("%[^,]%*c",stu.course_id);
       scanf("%[^\n]%*c",stu.course_name);
       int x=(stu.roll_number/1000)%100;
    	if(x==03){
    		printf("%-20d",stu.roll_number);
    		printf("%-30s",stu.student_name);
    		printf("%s\n",stu.course_id);
        }
    }
    return 0;
}
