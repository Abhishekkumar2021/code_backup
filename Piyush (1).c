#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct IP{
	int IP1;
	int IP2;
	int IP3;
	int IP4;
};

int distinct_address(char **str,int x,char **output){
    if(x==0 )
        return 0;
    int ans = distinct_address(str+1,x-1,output);
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
  FILE *ptr1 = fopen("week15-ML5-input 1.txt","r");
  FILE *ptr2 = fopen("week15-ML5-output.txt","w");   
   if(ptr1==NULL)    
        printf("Input File doesn't opened or may be not exist.\n");
    else{

        int c;     
        long int line_count=0;      
        while ((c = fgetc(ptr1)) != EOF){
            if(c=='\n')
            	line_count++;
        }

        struct IP *ip;
        ip = (struct IP *)malloc(line_count*sizeof(struct IP));
        char **address,**unique_address;
        address =  (char **)malloc(line_count*sizeof(char*));
        unique_address =  (char **)malloc(line_count*sizeof(char*));
        for(int i=0; i<line_count; i++){
        address[i] =  (char *)malloc(50*sizeof(char));
        unique_address[i] =  (char *)malloc(50*sizeof(char));
        }
        fseek(ptr1,0,SEEK_SET);
        for(int i=0; i<line_count; i++){
             fscanf(ptr1, "%[^\n]",address[i]);
         	int m = fgetc(ptr1);         //to capture the newline.
         }
         int uni_add = distinct_address(address,line_count,unique_address);;
         fprintf(ptr2,"Unique address: %d\n",uni_add);
         for(int i=0; i<uni_add; i++){
         	int count =0;
         	for(int j=0; j<line_count; j++){
                  if(strcmp(unique_address[i],address[j])==0)
                  	count++;
         	}
         	fprintf(ptr2,"%-30s%d\n",unique_address[i],count);
         }
    fclose(ptr1);
    fclose(ptr2);
    free(ip);
    free(address);
    free(unique_address);
    }
    
    return 0;
}