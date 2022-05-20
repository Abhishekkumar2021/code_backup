#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct IP_address {
     int element_1;
     int element_2;
     int element_3;
     int element_4;

};

int distinct(char **input,int x,char **output){
    if(x==0 )
        return 0;
    int ans = distinct(input+1,x-1,output);
    if(ans==0){
        output[0] = input[0];
        return 1;
    }

    for(int i=0; i<ans; i++){
        if(strcmp(input[0],output[i])==0){
             return ans;
         }
    }
    output[ans]=input[0];
    return ans+1;
}

int main(){

  FILE *inptr = fopen("week15-AL4-input.txt","r");
  FILE *outptr = fopen("output.txt","w");   
   if(inptr==NULL)     //here we are checking the condition whether file opens or not.
        fputs("Input File doesn't opened or doesn't exist.\n",outptr);
    else{

        int t;     //defining the required variable.
        long int line=0;      
        while ((t = fgetc(inptr)) != EOF){
            if(t=='\n')
            	line++;
        }
        struct IP_address *address;
        address = (struct IP_address *)malloc(line*sizeof(struct IP_address));
         fseek(inptr,0,SEEK_SET);
         for(int i=0; i<line; i++){
         	fscanf(inptr,"%[^\n]",address[i]);
         	m = fgetc(inptr);         //to capture the newline.
         }

    }
