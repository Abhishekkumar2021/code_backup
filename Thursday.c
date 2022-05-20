#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int distinctStr(char **str,int x,char **output){
    if(x==0 )
        return 0;
    int ans = distinctStr(str+1,x-1,output);
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

int setintersection(char **strA,int x,char**strB,int y,char **output){
         int count =0;
       for(int i=0; i<x; i++){
       	for(int j=0; j<y; j++){
         strcpy(output[count],strA[i]);
       			count++;
       	  }

          for(int i=0; i<x+y; i++){

          }
       }

       return count;
}

int setunion(char **strA,int x,char **strB,int y,char **output){
        
         char **newoutput;
       			newoutput = (char**)malloc((x+y)*sizeof(char*));
       			for(int j=0; j<x+y; j++)
       				newoutput[j] = (char*)malloc(50*sizeof(char));
       int count =0;
       for(int i=0; i<x; i++){
       	strcpy(newoutput[count],strA[i]);
       			count++;
       	}
       	for(int i=0; i<y; i++){
       	strcpy(newoutput[count],strB[i]);
       			count++;
       	}

       			
       int size = distinctStr(newoutput,count,output);
       return size;
}

int main(){

  FILE *inptr = fopen("week15-AL4-input.txt","r");
  FILE *outptr = fopen("output.txt","w");   
  FILE *outptr_uni = fopen("week15-AL4-union-output.txt","w");
  FILE *outptr_int = fopen("week15-AL4-intersection-output.txt","w");
  if(inptr==NULL)     //here we are checking the condition whether file opens or not.
        fputs("Input File doesn't opened or doesn't exist.\n",outptr);
    else{

        int t;     //defining the required variable.
        long int line=0;      
        while ((t = fgetc(inptr)) != EOF){
            if(t=='\n')
            	line++;
        }

        char **set_A,**set_B;
        set_A = (char**)malloc(line*sizeof(char*));
        set_B = (char**)malloc(line*sizeof(char*));
        for(int i=0; i<line; i++){
        	set_A[i] =  (char*)malloc(50*sizeof(char));
        	set_B[i] =  (char*)malloc(50*sizeof(char));
        }
        int m;
        fseek(inptr,0,SEEK_SET);
         for(int i=0; i<line; i++){
         	fscanf(inptr,"%[^ ]",set_A[i]);
         	m = fgetc(inptr);         //to capture the space.
         	fscanf(inptr,"%[^\n]",set_B[i]);
         	m = fgetc(inptr);         //to capture the newline.
         }
         
         int disA,disB;
         char **dis_set_A,**dis_set_B;
        dis_set_A = (char**)malloc(line*sizeof(char*));
        dis_set_B = (char**)malloc(line*sizeof(char*));
        for(int i=0; i<line; i++){
        	dis_set_A[i] =  (char*)malloc(50*sizeof(char));
        	dis_set_B[i] =  (char*)malloc(50*sizeof(char));
        }
        disA = distinctStr(set_A,line,dis_set_A);
        disB = distinctStr(set_B,line,dis_set_B);
         fprintf(outptr,"The number of distinct IP addresses in set A is :%d\n",disA);
        fprintf(outptr,"The number of distinct IP addresses in set B is :%d\n",disB);
        
        char **AunionB,**AintersectionB;
        AunionB = (char**)malloc((2*line)*sizeof(char*));
        AintersectionB = (char**)malloc((2*line)*sizeof(char*));
        for(int i=0; i<2*line; i++){
        	AunionB[i] = (char*)malloc(50*sizeof(char));
            AintersectionB[i] = (char*)malloc(50*sizeof(char));
        }
         int num_AunionB,num_AintersectionB;
        //num_AunionB = setunion(dis_set_A,disA,dis_set_B,disB,AunionB);
        num_AintersectionB = setintersection(dis_set_A,disA,dis_set_B,disB,AintersectionB);
        fprintf(outptr,"The number of  IP addresses in union of A & B is :%d\n",num_AunionB);
        fprintf(outptr,"The number of  IP addresses in intersection of A & B is :%d\n",num_AintersectionB);
         for(int i=0; i<num_AintersectionB; i++)
         	fprintf(outptr_int,"%s\n",AintersectionB[i]);
         fprintf(outptr_int,"\n");
     }
    
    fclose(inptr);
    fclose(outptr);
    fclose(outptr_uni);
    fclose(outptr_int);
    return 0;
    }     

