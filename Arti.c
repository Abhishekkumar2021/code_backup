#include<stdio.h>
#include<stdlib.h>
struct image{
	int row;
	int col;
	char val;
};
int minu(int a, int b);
int min(int a, int b, int c);
int max(int a, int b);
void diagonaltraversal(char **matrix,int ROW,int COL,int **arr,FILE *outptr);
int main(){
	 FILE *ptr_input =fopen("week15-ML2-input.txt","r");
    FILE *ptr_output =fopen("week15-ML2-output.txt","w");
    if(ptr_input==NULL)
    	fprintf(ptr_output,"File doesn't open or may not exist\n");
    else{
    	 int R,C;
    	 fscanf(ptr_input, "%d%d",&R,&C);
    	 char k =fgetc(ptr_input);
    	int **array;
        int DL = R+C-1;                
        array = (int **)malloc(DL*sizeof(int*));
        for(int i=0; i<DL; i++)
        	array[i] = (int*)malloc(30*sizeof(int));
    	 int N_line = R*C;
        struct image *img;
        img = (struct image *)malloc(N_line*sizeof(struct image));
        
        for(int i=0; i<N_line; i++){
             fscanf(ptr_input,"%d",&img[i].row);
            k = fgetc(ptr_input); 
            fscanf(ptr_input,"%d",&img[i].col);
            k = fgetc(ptr_input); 
            fscanf(ptr_input,"%c",&img[i].val);
            k = fgetc(ptr_input); 
        }
        char **str;
      str = (char**)malloc(num_rows*sizeof(char*));
      for(int i=0; i<num_rows; i++)
        str[i]=(char*)malloc(num_columns*sizeof(char));
      for(int i=0; i<lines; i++ )
           str[I[i].R][I[i].C] = I[i].V;
       diagonaltraversal(str,num_rows,num_columns,arr,outptr);

        fprintf(ptr_output ,"%d\n",img[10].col);
        free(img);
        free(array);
        fclose(ptr_output);
        fclose(ptr_input);

    }
	return 0;
}
int minu(int a, int b)    //to find the minmum of two numbers
{
    return (a < b) ? a : b;
}
int min(int a, int b, int c){         //to find minimum of the three numbers
    return minu(minu(a, b), c);
}
 
int max(int a, int b){        //to find maximum of two numbers.
    return (a > b) ? a : b;
}
void diagonaltraversal(char **matrix,int ROW,int COL,int **arr,FILE *outptr){
    
    for(int i = 1; i <= (ROW + COL - 1); i++){
        int col=0;
         int starcount=0;
         int minuscount=0;
        int start_col =  max(0, i - ROW);
 
         int count = min(i, (COL - start_col), ROW);

        for(int j = 0; j < count; j++){
              if(matrix[minu(ROW, i) - j - 1][start_col + j]=='*')
              starcount++;  
          if(matrix[minu(ROW, i) - j - 1][start_col + j]=='*')
            minuscount++;
        }
        fprintf(outptr,"The number of starcount in diagonal %d & The number of minuscount in diagonal %d\n",i,starcount,i,minuscount);
          
    }
}