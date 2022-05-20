#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	char *line;
	int serial_number;
	int roll_number;
	char *student_name[100] ;
	char *course_id[6] ;
	char *course_name[100];
    int *ptr;
};

int main(){
	  freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n;
	scanf("%d",&n);
	struct student stu;
	stu.line = (char*)malloc(200*sizeof(char));
	stu.ptr = (int*)malloc(10*sizeof(int));
	char del;
	scanf("%c",&del);
	for(int i=0; i<10; i++){
		scanf("%d",&stu.ptr[i]);
	}
	printf("%d ",n);
    for(int i=0; i<10; i++){
		printf("%d ",stu.ptr[i]);
	}
	free(stu.ptr);
	free(stu.line);
}