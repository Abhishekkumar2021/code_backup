#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct batsman {
    char batsman_name[100];
    char status;
    char bowler_name[100];
    int runs;
    int balls;
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

  FILE *inptr = fopen("week15-ML3-input.txt","r");
  FILE *outptr = fopen("week15-ML3-output.txt","w");
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
       char **batsman,**distinct_batsman,**bowler,**distinct_bowler;
       batsman = (char**)malloc(line*sizeof(char*));
       distinct_batsman = (char**)malloc(line*sizeof(char*));
       bowler = (char**)malloc(line*sizeof(char*));
       distinct_bowler = (char**)malloc(line*sizeof(char*));  
       for(int i=0; i<line; i++){
       batsman[i] = (char*)malloc(20*sizeof(char));
       distinct_batsman[i] = (char*)malloc(20*sizeof(char*));
       bowler[i] = (char*)malloc(20*sizeof(char*));
       distinct_bowler[i] = (char*)malloc(20*sizeof(char*));  
       }
       for(int i=0; i<line; i++){
          strcpy(batsman[i],str[i][3]);
          strcpy(bowler[i],str[i][1]);
       }
       int Dis_Bat,Dis_Bow;
       Dis_Bat = distinctStr(batsman,line,distinct_batsman);
       Dis_Bow = distinctStr(bowler,line,distinct_bowler);
       fprintf(outptr,"The number of distinct Batsman is : %d\n",Dis_Bat);
       fprintf(outptr,"The numberof distinct bowler is : %d\n",Dis_Bow);
       struct batsman *B;
       B = (struct batsman*)malloc(Dis_Bat*sizeof(struct batsman));
       for(int i=0; i<Dis_Bat; i++){
        B[i].runs=0;
        B[i].balls=0;
        B[i].status='*';
        for(int j=0; j<line; j++){
            strcpy(B[i].batsman_name,distinct_batsman[i]);
            if(strcmp(distinct_batsman[i],batsman[j])==0){
                strcpy(B[i].bowler_name,str[j][1]);
                (B[i].balls)++;
                if(strcmp(str[j][4],"FOUR,")==0)
                    (B[i].runs)+=4;
               if(strcmp(str[j][4],"SIX,")==0)
                    (B[i].runs)+=6;
                if(strcmp(str[j][4],"OUT,")==0)
                    (B[i].status)='b';
                if(strcmp(str[j][4],"1")==0  && strcmp(str[j][5],"run,")==0)
                    (B[i].runs)+=1;
                if(strcmp(str[j][4],"2")==0 && strcmp(str[j][5],"runs,")==0)
                    (B[i].runs)+=2;
                if(strcmp(str[j][4],"3")==0 && strcmp(str[j][5],"runs,")==0)
                    (B[i].runs)+=3;
                if(strcmp(str[j][4],"5")==0 && strcmp(str[j][5],"runs,")==0)
                    (B[i].runs)+=5;
            }

        }
       }
 
       fprintf(outptr,".........Scorecard.........\n");
       for(int i=0; i<Dis_Bat; i++){
        if(B[i].status == 'b')
        fprintf(outptr,"%s %c %s %d %d\n",B[i].batsman_name,B[i].status,B[i].bowler_name,B[i].runs,B[i].balls);
        else 
          fprintf(outptr,"%s %c %d %d\n",B[i].batsman_name,B[i].status,B[i].runs,B[i].balls);

       }


    }
    fclose(outptr);
    fclose(inptr);

  return 0;
}