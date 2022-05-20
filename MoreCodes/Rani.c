#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void departmentfinder(long int *roll_no, int n, char **department){      //this is the department finder function.
   for(int i=0; i<n; i++){
     int dept_code;
     int temp =roll_no[i]/1000;
   dept_code=temp%100;
 
   if(dept_code==1)
    strcpy(department[i],"CSE");
   else if(dept_code == 2)
    strcpy(department[i],"ECE");
   else if(dept_code == 3)
    strcpy(department[i],"ME");
    else if(dept_code ==4)
     strcpy(department[i],"CE");
    else if(dept_code == 5)
    strcpy(department[i],"DD");
    else if(dept_code == 6)
    strcpy(department[i],"BSBE");
    else if(dept_code == 7)
    strcpy(department[i],"CL");
    else if(dept_code == 8)
    strcpy(department[i],"EEE");
    else if(dept_code == 21)
    strcpy(department[i],"EPH");
    else if(dept_code == 22)
    strcpy(department[i],"CST");
    else
    strcpy(department[i],"M&C");
   } 
}


void mergesort(int arr[],int l,int r){            //this is mergesort function that is used here to sort the elments.
if(l>=r)
    return;
int mid = (l+r)/2;
mergesort(arr,l,mid);
mergesort(arr,mid+1,r);
int left = mid-l+1;
int right = r-mid;
int L[left],R[right];
for(int i=0; i<left; i++)
    L[i]=arr[i+l];
for(int i=0; i<right; i++)
    R[i]=arr[l+left+i];
int i=0, j=0,x=0;
while(i<left && j<right){

    if(L[i]<=R[j]){
     arr[l+x]=L[i];
     i++;

    }
    else{
     arr[l+x]=R[j];
     j++;

    }
     x++;
  }
  while(i<left){
    arr[l+x]=L[i];
     i++;
     x++;
  }
  while(j<right){
    arr[l+x]=R[j];
     j++;
     x++;
  }

}


int main(){
  FILE *inptr = fopen("week15-AL2-input.txt","r");    //file opening for reading.
  FILE *outptr = fopen("output.txt","w");    //file opening for writing.
   if(inptr==NULL)    
        printf("Input File doesn't opened or may be not exist.\n"); //checking whether file has opened or not.
    else{
    	int t;
    	int line= 0;
        while ((t = fgetc(inptr)) != EOF){           //this loop is going to run till the file pointe reaches the end of the file
    	      if(t=='\n')
    	      	line++;
    	}      
    	fseek(inptr,0,SEEK_SET);    //again setting the file pointer at the beginning.
    	long int *roll_num;        
    	roll_num = (long int*)malloc(line*sizeof(int));
    	char **course_id;
    	course_id = (char **)malloc(line*sizeof(char*));
    	for(int i=0; i<line; i++){
    		course_id[i] = (char*)malloc(10*sizeof(char));
    	}
        int *id_num;
        id_num = (int*)malloc(line*sizeof(int));
    	int p;
    	for(int i=0; i<line; i++){
    		char str[10];
    		fscanf(inptr,"%[^,]",str);
    		roll_num[i] = atoi(str);
    		p = fgetc(inptr);
    		fscanf(inptr,"%s",course_id[i]);
    		p = fgetc(inptr);
    		id_num[i] = atoi(course_id[i]+2);
    	}
         mergesort(id_num,0,line-1);
         char **department;
    	department = (char **)malloc(line*sizeof(char*));
    	for(int i=0; i<line; i++)
    		department[i] = (char*)malloc(10*sizeof(char));
    	
         for(int i=0; i<line; i++){
         	sprintf(course_id[i],"HS%d",id_num[i]);
         }
         departmentfinder(roll_num,line,department);
         for(int i=0; i<line; i++){
         	fprintf(outptr,"%s  %d   %s\n",course_id[i],roll_num[i],department[i]);
         }
    	
      
    }
    
    return 0;
}