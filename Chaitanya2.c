#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct IP_ADDRESS{             //defining a structre with four int data types of element.
	int IP_ADDRESS1;
	int IP_ADDRESS2;
	int IP_ADDRESS3;
	int IP_ADDRESS4;
};

int DISTINCT_IP_Add(char **str,int x,char **output){      //this is a recursive function use to find the different types of addresses.
    if(x==0 )
        return 0;
    int ans = DISTINCT_IP_Add(str+1,x-1,output);
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

int main(){
  FILE *inptr = fopen("week15-ML5-input 1.txt","r");  //opening the input file.
  FILE *ptr2 = fopen("week15-ML5-output.txt","w");    //opening the output file.
   if(inptr==NULL)      //checking whether file has opened or not.
        printf("Input File doesn't opened or may be not exist.\n");
    else{

        int c;     
        long int line_count=0;      
        while ((c = fgetc(inptr)) != EOF){   //counting number of lines.
            if(c=='\n')
            	line_count++;
        }

        struct IP_ADDRESS *Address;             //defining a structre variable as ordered.
        Address = (struct IP_ADDRESS *)malloc(line_count*sizeof(struct IP_ADDRESS));
        char **Add,**UniAdd;
        Add =  (char **)malloc(line_count*sizeof(char*));
        UniAdd =  (char **)malloc(line_count*sizeof(char*));
        for(int i=0; i<line_count; i++){
        Add[i] =  (char *)malloc(50*sizeof(char));
        UniAdd[i] =  (char *)malloc(50*sizeof(char));
        }
        fseek(inptr,0,SEEK_SET);
        for(int i=0; i<line_count; i++){
             fscanf(inptr, "%[^\n]",Add[i]);
         	int m = fgetc(inptr);         //to scan the newline.
         }
         int uni_add = DISTINCT_IP_Add(Add,line_count,UniAdd);;
         fprintf(ptr2,"Total Number of Unique Addresses are : %d\n",uni_add);
         for(int i=0; i<uni_add; i++){
         	int count =0;
         	for(int j=0; j<line_count; j++){
                  if(strcmp(UniAdd[i],Add[j])==0)
                  	count++;
         	}
         	fprintf(ptr2,"%-30s|  %d\n",UniAdd[i],count);
         }
    fclose(inptr);  //closing the input file.
    fclose(ptr2);  //closing the output file.
    free(Address);    //deallocation of dynamic memory. 
    free(Add);     //deallocation of dynamic memory. 
    free(UniAdd);       //deallocation of dynamic memory. 
    }
    
    return 0;
}