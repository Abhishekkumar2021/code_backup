#include <stdio.h>
#include <stdlib.h>

//declaring a structure with intger and character pointers
typedef struct{
    char* C;
    int* I;
}Data;

int main()
{
    int k;
    int noOfStudents;
    scanf("%d",&noOfStudents); //scanning total students
    k=getchar();  //for scanning endline
    Data data;
    /*allocating memory for storing integer and string of struct "Data"*/
    data.C =(char*)malloc(200*sizeof(char));
    data.I =(int*)malloc(10*sizeof(int));
    int i;
    for(i=0;i<10;i++){
        //reading which the position of characters that we need
        scanf("%d",&data.I[i]);
    }
    k=getchar();  //for scanning endline
    char ans[10];
    for(i=0;i<noOfStudents;i++){
        //reading the information about particular student
        scanf(" %[^\n]",data.C);
        //storing the characters we want into an array
        for(int j=0;j<10;j++){
            ans[j]=data.C[2*j];
        }
        /*printing the characters we want in reverse order*/
        for(int j=9;j>=0;j--){
            printf("%c",ans[j]);
        }
    printf("\n");
    }
    //freeing the allocated memory
    free(data.C);
    free(data.I);

    return 0;
}
