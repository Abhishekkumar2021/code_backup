#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
     for(int i=0; i<n; i++){
      	int x=(stu[i].roll_number/1000)%100;
      	if(strcmp(stu[i].course_id,"HS116")==0){
    		printf("%-20d",stu[i].roll_number);
    		printf("%-30s",stu[i].student_name);
    		printf("%-15s",stu[i].course_id);
    		switch(x){
    			case 1: printf("CSE\n"); break;
    			case 2: printf("ECE\n"); break;
    			case 3: printf("ME\n"); break;
    			case 4: printf("CE\n"); break;
    			case 5: printf("DD\n"); break;
    			case 6: printf("BSBE\n"); break;
    			case 7: printf("CL\n"); break;
    			case 8: printf("EEE\n"); break;
    			case 21: printf("CST\n"); break;
    			case 22: printf("EP\n"); break;
    			case 23: printf("MnC\n"); break;

            }

    	}

    }
    return 0;
}

