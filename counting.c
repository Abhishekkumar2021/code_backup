#include<stdio.h>

int main(){
	FILE *inptr = fopen("input.txt","r");    
    FILE *outptr = fopen("output.txt","w");             
    if(inptr==NULL)    
    	fputs("Input File doesn't opened or doesn't exist.\n",outptr);
    else{
        int t;
        while ((t = fgetc(inptr)) != EOF){           
             fprintf(outptr,"Current location = %d\n",ftell(inptr));
        }
        
        
    }
    fclose(inptr);
    fclose(outptr);
    return 0; 
}