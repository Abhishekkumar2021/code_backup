#include<stdio.h>
#include<stdlib.h>

int main(){
  FILE *in = fopen("week15-AL2-input.txt","r");
  FILE *out = fopen("week15-AL2-output.txt","w");   
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
    	for(int i=0; i<line_count; i++)
    		C_id[i] = (char*)malloc(10*sizeof(char));

    	int p,i=0;
    	while(i<line_count){
    		fscanf(in, "%d",RN[i]);
    	    p = fgetc(in);
    	    fscanf(in, "%[^\n]",C_id[i]);
    	    p = fgetc(in);
    	    i++;
    	}
        fprintf(out,"hello\n");
    
    return 0;
}