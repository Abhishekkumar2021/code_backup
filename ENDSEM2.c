#include<stdio.h>

int main(){
	FILE *inptr = fopen("week15-AL1-input1.txt","r");     //This will open the input file in read mode and return it's holder to file pointer inptr.
    FILE *outptr = fopen("output.txt","w");               //this will open the output file and return return it's holder to file pointer outptr
    if(inptr==NULL)     //here we are checking the condition whether file opens or not.
    	fputs("Input File doesn't opened or doesn't exist.\n",outptr);
    else{
          
    	int t,x,y,p=1;     //defining the required variable.
    	char a,b,c,d;
    	fscanf(inptr, "%c%c%d", &a,&b,&x);
        fscanf(inptr, " %c%c%d", &c,&d,&y);
        int m = fgetc(inptr);              //to get end of line at 2nd line.
    	long int char_count=0,line_count =0; 
    	while ((t = fgetc(inptr)) != EOF){           //this loop is going to run till the file pointe reaches the end of the file
    		char_count++;                  //counting number of characters
    		if(t == '\n')
    		line_count++;                  //counting number of lines.
    		char buffer[100];
    		sprintf(buffer,"200101006-AL1-cx-output%d.txt",p);      //use to give different names to every file.
    		FILE *fp = fopen(buffer,"w");              //creating the new files in write mode.
    		for(int i=0; i<x; i++){                    //this loop will run x times and write all the contentb in the created output file.
                 if(t == '\n')
                     t=' ';
                 fputc(t,fp);           //putting character in the created file.
                 if((t = fgetc(inptr))==EOF)
                 	break;
                char_count++;
    	     	if(t == '\n')
    			line_count++;
                 
    		}
    		fclose(fp);       //closing each output file that we have created.
    		p++;
    	}

        fclose(inptr);   //this will close our input file.
        p=1;
        inptr = fopen("week15-AL1-input1.txt","r");     //again opening the input file.
        fscanf(inptr, "%*c%*c%*d");             //this is to scan line 1 and 2 of input file and this will stored in any of the variable
        fscanf(inptr, " %*c%*c%*d");
        int temp = fgetc(inptr); 
    	while ((t = fgetc(inptr)) != EOF){
    		char buffer[100];
    		sprintf(buffer,"200101006-AL1-ly-output%d.txt",p);
    		FILE *fp = fopen(buffer,"w");
    		int newline = 0;
    		while(newline<y){          //this loop will write the specific lines of input file into the created output file.
                 if(t == '\n')
                    newline++;
                 fputc(t,fp);
                 if((t = fgetc(inptr))==EOF)
                 	break;
                 
    		}
    		fclose(fp);     //closing the created file.
    		p++;
    	}


        fprintf(outptr,"The number of characters in the given input file file are : %ld\n",char_count);
        fprintf(outptr,"The number of lines in the given input file are : %ld\n",line_count);
    }

    fclose(inptr);
    fclose(outptr);
    return 0;
}