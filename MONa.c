#include<stdio.h>
#include<stdlib.h>

struct IMG{        //Defining a structre having three elements.
	int R;          //for number of rows.
	int C;          //for number of columns.
	char V;         //for value.
};

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
        /* Get column index of the first element
           in this line of output.
           The index is 0 for first ROW lines and
           line - ROW for remaining lines  */
        int start_col =  max(0, i - ROW);
 
        /* Get count of elements in this line. The
           count of elements is equal to minimum of
           line number, COL-start_col and ROW */
         int count = min(i, (COL - start_col), ROW);

        for(int j = 0; j < count; j++){
              if(matrix[minu(ROW, i) - j - 1][start_col + j]=='*' && matrix[minu(ROW, i) - j ][start_col + j+1]=='*')
                 starcount++;  
              else
                col++;
              if(matrix[minu(ROW, i) - j - 1][start_col + j]=='-' && matrix[minu(ROW, i) - j ][start_col + j+1]=='-')
            minuscount++;
        else 
            j++;
        }
        fprintf(outptr,"The number of starcount in diagonal %d & The number of minuscount in diagonal %d\n",i,starcount,i,minuscount);
          
    }
}

int main(){
    FILE *inptr =fopen("week15-ML2-input.txt","r");      //opening the input file in the read mode.
    FILE *outptr =fopen("output.txt","w");     //opening the output file in the write mode
    if(inptr==NULL)              //checking whether file has opened or not.
    	fprintf(outptr,"ERROR File not found OR not exist\n");
    else{            //if file has opened then we will do our task otherwise not.
        int num_rows,num_columns;
        fscanf(inptr, "%d%d",&num_rows,&num_columns);   //scanning the number of rows and number of clumns. 
        int x = fgetc(inptr);      // to capture the newline character.
        int lines = num_rows*num_columns;     //calculating number of lines which will be used to define the structre withcorrect size.
        struct IMG *I;       //defining a structre pointer.
        I = (struct IMG *)malloc(lines*sizeof(struct IMG));      //allocating memory with size equal to number of lines in the input file.
        int **arr;      //defining a double pointer to int.
        int diagonals = num_rows+num_columns-1;               //finding number of diagonals. 
        arr = (int **)malloc(diagonals*sizeof(int*));       //allocating memory of size equals to the number of diagonals.
        for(int i=0; i<diagonals; i++)
        	arr[i] = (int*)malloc(30*sizeof(int));       //allocating size of 30 integers to each element of double pointer.
        for(int i=0; i<lines; i++){
             fscanf(inptr,"%d",&I[i].R);       //scanning the row number.
            x = fgetc(inptr);          //getting the comma.
            fscanf(inptr,"%d",&I[i].C);     //scanning the number of columns.
            x = fgetc(inptr);    //getting the comma.
            fscanf(inptr,"%c",&I[i].V);          //scanning the value.
            x = fgetc(inptr);        //getting the newline.
        }
      char **str;
      str = (char**)malloc(num_rows*sizeof(char*));
      for(int i=0; i<num_rows; i++)
        str[i]=(char*)malloc(num_columns*sizeof(char));
      for(int i=0; i<lines; i++ )
           str[I[i].R][I[i].C] = I[i].V;
       diagonaltraversal(str,num_rows,num_columns,arr,outptr);

        free(I);
        free(arr);
        fclose(outptr);
        fclose(inptr);

    }
	return 0;
}