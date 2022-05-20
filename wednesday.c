#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct bowler {
	char bowler_name[100];
    float overs;
	int runs;
	int wicket;
};

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

int main(){

  FILE *inptr = fopen("week15-AL3-input.txt","r");
  FILE *outptr = fopen("output.txt","w");
  if(inptr==NULL)     //here we are checking the condition whether file opens or not.
    	fputs("Input File doesn't opened or doesn't exist.\n",outptr);
    else{

    	int t,line;     //defining the required variable.
    	fscanf(inptr, "%d", &line);
        int m = fgetc(inptr);  //to get end of line at 2nd line.
        char arr[line][1024];  
        int i=0,j=0;         
    	while ((t = fgetc(inptr)) != EOF){           //this loop is going to run till the file pointe reaches the end of the file
    	      arr[i][j] = t;
    	      j++;
    	      if(t=='\n'){
    	      	j=0;
    	      	i++;
    	      }
    	}        

       char str[line][20][100];
       for(int i=0; i<line; i++){
       	   int j=0;
       	   char* token = strtok(arr[i], " ");
            while (token != NULL) {
                strcpy(str[i][j],token);
                j++;
                token = strtok(NULL, " ");
             }
       }
       char **bowler,**distinct_bowler;
       bowler = (char**)malloc(line*sizeof(char*));
	   distinct_bowler = (char**)malloc(line*sizeof(char*));  
	   for(int i=0; i<line; i++){
	   bowler[i] = (char*)malloc(20*sizeof(char*));
	   distinct_bowler[i] = (char*)malloc(20*sizeof(char*));  
	   }
       for(int i=0; i<line; i++){
       	  strcpy(bowler[i],str[i][1]);
       }
       int Dis_Bow;
       Dis_Bow = distinctStr(bowler,line,distinct_bowler);
       fprintf(outptr,"The number of distinct bowlers are : %d\n",Dis_Bow);
       fprintf(outptr,".........Scorecard.........\n");
       struct bowler *B;
       B = (struct bowler*)malloc(Dis_Bow*sizeof(struct bowler));
       for(int i=0; i<Dis_Bow; i++){
       	B[i].runs=0;
        float count = 0;
        B[i].wicket = 0;
        strcpy(B[i].bowler_name,distinct_bowler[i]);
       	for(int j=0; j<line; j++){
       		if(strcmp(distinct_bowler[i],bowler[j])==0){
       			count++;
       	        if(strcmp(str[j][4],"FOUR,")==0)
       	        	(B[i].runs)+=4;
       	        if(strcmp(str[j][4],"SIX,")==0)
       	            (B[i].runs)+=6;
       	        if(strcmp(str[j][4],"OUT,")==0)
       	        	(B[i].wicket)++;
       	        if(strcmp(str[j][4],"1")==0 && strcmp(str[j][5],"run,")==0 )
       	        	(B[i].runs)+=1;
       	        if(strcmp(str[j][4],"2")==0 && strcmp(str[j][5],"runs,")==0 )
       	        	(B[i].runs)+=2;
       	        if(strcmp(str[j][4],"3")==0 && strcmp(str[j][5],"runs,")==0)
       	        	(B[i].runs)+=3;
       	        if(strcmp(str[j][4],"5")==0 && strcmp(str[j][5],"runs,")==0)
       	        	(B[i].runs)+=5;
       		}

       	}
        B[i].overs = count/6;
        fprintf(outptr,"%s %.1f %d %d\n",B[i].bowler_name,B[i].overs,B[i].runs,B[i].wicket);
       }
        
   
    }
    fclose(outptr);
    fclose(inptr);

  return 0;
}