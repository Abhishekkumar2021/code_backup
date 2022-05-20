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
        for(int i=0; i<line; i++){
            sprintf(pair_first[i],"%s %s",addressA[i],addressB[i]);
        }
        FILE *inptr2 = fopen("week15-AL5-input2.txt","r");
        int k;     //defining the required variable.
        int line2=0;      
        while ((k = fgetc(inptr2)) != EOF){
            if(k=='\n')
                line2++;
        }
        fseek(inptr2,0,SEEK_SET);
        int p;
        for(int i=0; i<line2; i++){
           fscanf(inptr2,"%[^\n]",pair_second[i]);
           p = fgetc(inptr2);    // to grab the newline.
        }
        for(int i=0; i<line2; i++){
            int count=0;
            for(int j=0; j<line; j++){
                if(strcmp(pair_second[i],pair_first[j])==0)
                    count++;
            }
            fprintf(outptr,"%-30s:  %d\n",pair_second[i],count);
        }
       free(addressA);
       free(addressB);
       free(unique_addressA);
       free(unique_addressB);
       free(pair_first);
       free(pair_second);
       fclose(outptr);
       fclose(inptr1);
      
    }
    
    return 0;
}