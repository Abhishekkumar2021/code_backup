#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct IP{
    int IP1;
    int IP2;
    int IP3;
    int IP4;
};

struct pair{
    struct IP first;
    struct IP second;
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
  FILE *inptr = fopen("week15-ML5-input1 1.txt","r");
  FILE *outptr = fopen("output.txt","w");   
   if(ptr1==NULL)    
        printf("Input File doesn't opened or may be not exist.\n");
    else{
        int line;
        fscanf(inptr,"%d",&line);
        int t = fgetc(inptr);      // to grab the newline.


      
    }
    
    return 0;
}