#include<stdio.h>
#include<stdlib.h>

struct IMG{        //Defining a structre having three elements.
	int R;          //for number of rows.
	int C;          //for number of columns.
	char V;         //for value.
};

int main(){
    FILE *inptr =fopen("week15-ML2-input.txt","r");      //opening the input file in the read mode.
    FILE *outptr =fopen("output.txt","w");     //opening the output file in the write mode
    if(inptr==NULL)              //checking whether file has opened or not.
    	fprintf(outptr,"ERROR File not found OR not exist\n");
    else{            //if file has opened then we will do our task otherwise not.
        int num_rows,num_columns;
        fscanf(inptr, "%d%d",&num_rows,&num_columns);   //scanning the number of rows and number of clumns. 
        int x = fgetc(inptr);      // to capture the newline character.
        int lines = num_rows*num_columns;
        struct IMG *I;
        I = (struct IMG *)malloc(lines*sizeof(struct IMG));
        int **arr;
        int diagonals = num_rows*2-1;                
        arr = (int **)malloc(diagonals*sizeof(int*));
        for(int i=0; i<diagonals; i++)
        	arr[i] = (int*)malloc(30*sizeof(int));
        for(int i=0; i<lines; i++){
             fscanf(inptr,"%d",&I[i].R);
            x = fgetc(inptr); 
            fscanf(inptr,"%d",&I[i].C);
            x = fgetc(inptr); 
            fscanf(inptr,"%c",&I[i].V);
            x = fgetc(inptr); 
        }
        fprintf(outptr,"%d\n",I[5].C);
    }
	return 0;
}