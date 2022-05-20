#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct IP{
    int IP1;
    int IP2;
    int IP3;
    int IP4;
};

struct pairs{
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
  FILE *inptr1 = fopen("week15-AL5-input1.txt","r");
  FILE *outptr = fopen("week15-AL5-output.txt","w");   
   if(inptr1==NULL)    
        printf("Input File doesn't opened or may be not exist.\n");
    else{
        int line;
        fscanf(inptr1,"%d",&line);
        int t = fgetc(inptr1);      // to grab the newline.
        struct pairs *P;
        P = (struct pairs*)malloc(line*sizeof(struct pairs));
        char **addressA,**unique_addressA;
        addressA =  (char **)malloc(line*sizeof(char*));
        unique_addressA =  (char **)malloc(line*sizeof(char*));
        for(int i=0; i<line; i++){
        addressA[i] =  (char *)malloc(50*sizeof(char));
        unique_addressA[i] =  (char *)malloc(50*sizeof(char));
        }
        char **addressB,**unique_addressB;
        addressB =  (char **)malloc(line*sizeof(char*));
        unique_addressB =  (char **)malloc(line*sizeof(char*));
        for(int i=0; i<line; i++){
        addressB[i] =  (char *)malloc(50*sizeof(char));
        unique_addressB[i] =  (char *)malloc(50*sizeof(char));
        }
        for(int i=0; i<line; i++){
          fscanf(inptr1,"%[^ ]",addressA[i]);
          t = fgetc(inptr1);      // to grab the space.
          fscanf(inptr1,"%[^\n]",addressB[i]);
           t = fgetc(inptr1); // to grab the newline.
        }
        int a,b;
        a = distinct_address(addressA,line,unique_addressA);
        b = distinct_address(addressB,line,unique_addressB);
        fprintf(outptr,"The number of unique addresses are : %d\n",a+b);
        char **pair_first,**pair_second;
        pair_first =  (char **)malloc(line*sizeof(char*));
        pair_second =  (char **)malloc(line*sizeof(char*));
        for(int i=0; i<line; i++){
        pair_first[i] =  (char *)malloc(50*sizeof(char));
         pair_second[i] =  (char *)malloc(50*sizeof(char));
        }