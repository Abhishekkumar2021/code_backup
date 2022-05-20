#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubblesort(int arr[],int size){
    for(int i=0;i<size-1;i++){
      for(int j=0;j<size-i-1;j++){
         if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
    }

}

void departmentfinder(long int *roll_no, int n, char **department){      //this is the department finder function.
   for(int i=0; i<n; i++){
     int dept_code;
     int x=roll_no[i]/1000;
   dept_code=x%100;
 
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

int main(){
  FILE *in = fopen("week15-AL2-input.txt","r");
  FILE *out = fopen("output.txt","w");   
  int i;
    	int x = fgetc(in);
    	long int line_count = 0;
        while (x != EOF){           
    	      if(x=='\n')
    	      	line_count++;
    	      x = fgetc(in);
    	}  
    	fclose(in);
    	in = fopen("week15-AL2-input.txt","r");  

    	long int RN[line_count];
    	char **C_id;
    	C_id = (char **)malloc(line_count*sizeof(char*));
    	for(i=0; i<line_count; i++)
    		C_id[i] = (char*)malloc(20*sizeof(char));
      int *n;
        n = (int*)malloc(line_count*sizeof(int));
    	int p;
      i=0;
    	while(i<line_count){
    		char str[10];
        fscanf(in,"%[^,]",str);
        RN[i] = atoi(str);
        fscanf(in,"%*c");
        fscanf(in,"%s",C_id[i]);
        p = fgetc(in);
        n[i] = atoi(C_id[i]+2);
        i++;

    	}
      bubblesort(n,line_count);
         char **department;
      department = (char **)malloc(line_count*sizeof(char*));
      for(int i=0; i<line_count; i++)
        department[i] = (char*)malloc(10*sizeof(char));
      
         for(int i=0; i<line_count; i++){
          sprintf(C_id[i],"HS%d",n[i]);
         }
         departmentfinder(RN,line_count,department);
         for(int i=0; i<line_count; i++){
          fprintf(out,"%s  %d   %s\n",C_id[i],RN[i],department[i]);
         }
    
    return 0;
}