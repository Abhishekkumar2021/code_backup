#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	char *line;
	int serial_number;
	int roll_number;
	char student_name[100] ;
	char course_id[6] ;
	char course_name[100];
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
        char newstr[200];
        strcpy(newstr,stu.line);
        k=getchar();    //scanning end of line....
        char *str[5];     //this is a string whih store every field seperately... 
        char *token = strtok(stu.line,"#");
        int size=0;
        while(token!=NULL){
            str[size] = token;
            size++;
            token = strtok(NULL, "#");
        }
        if(strcmp(stu.line,newstr)!=0){
        stu.serial_number  = atoi(str[0]);
        stu.roll_number = atoi(str[1]);
        strcpy(stu.student_name , str[2]);
        strcpy(stu.course_id ,str[3]);
        strcpy(stu.course_name ,str[4]);
             for(int j=0; j<size-1; j++){
        	for(int k=0; k<2; k++){
        		if(j==stu.ptr[k]-1)
        			printf("%s ",str[j]);
        	}
        	
          }  
                  printf("\n");
        }   
    }
	free(stu.ptr);
	free(stu.line);
}