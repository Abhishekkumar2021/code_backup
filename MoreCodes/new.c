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
	int n,k;
	scanf("%d",&n);
	k=getchar();    //scanning end of line....
	struct student stu;
	stu.line = (char*)malloc(200*sizeof(char));
	stu.ptr = (int*)malloc(10*sizeof(int));
	char del;
	scanf("%c",&del);
	for(int i=0; i<2; i++){
		scanf("%d",&stu.ptr[i]);
       
	}
    k=getchar(); 
    for(int i=0; i<n; i++){
        scanf("%[^\n]",stu.line);
        k=getchar();    //scanning end of line....
        char *str[5];
        char *token = strtok(stu.line, ",");
        int size=0;
        while(token!=NULL){
            str[size] = token;
            size++;
            token = strtok(NULL, ",");
        }
        for(int j=0; j<size; j++){
            
        }
        printf("%d",size);
       
    }
	free(stu.ptr);
	free(stu.line);
}