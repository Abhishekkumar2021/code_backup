#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct IP{
    int first;
    int second;
    int third;
    int fourth;
};
int main()
{
    FILE * fileptr;
    FILE * uni;

    int count=0;
    int c;
    fileptr = fopen("week15-ML5-input 1.txt", "r");
    uni=fopen("week15-ML5-output.txt", "w");


    if (fileptr == NULL){
        printf("Could not open file.");
        return 0;
    }
   /// number of lines///
    for(c=fgetc(fileptr); c!=EOF; c=fgetc(fileptr)){
        if (c=='\n'){
            count++;
        }
    }


    fseek(fileptr, 0L, SEEK_SET);

    char A[count][40];
    char a[40];
    fscanf(fileptr,"%s",A[0]);
    int ca=0;
    int cb=0;
    int n[count];
    int i,j;
    for( i=0; i<count; i++){
        fscanf(fileptr, " %s", a);
        int flag1=0;
        cb=0;
        for( j=0;j<=ca;j++){
            if(strcmp(A[j],a)==0)
                flag1=1;
                cb++;

        }
        n[i]=cb;
        if(flag1==0){
            ca++;
            strcpy(A[ca],a);
        }
    }
    ca=ca+1;
    fprintf(uni,"%d\n",ca);
    int flag;
    int counter=0;
    for( i=0;i<ca;i++){
        fprintf(uni, "%-40s%-3d\n", A[i],n[i]);
    }
    fclose(fileptr);
    fclose(uni);

    return 0;
}
