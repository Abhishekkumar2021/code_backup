#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

int *array_1[5] ;
int *array_2[5] ;
int i,j;
int *t;

for(i=0;i<5;i++)
{
  array_1[i] = (int*)malloc(5*sizeof(int));
}

for(i=0;i<5;i++){
    array_2[i] = (int*)malloc(5*sizeof(int));
}

int d=1;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
            *(array_1[i]+j) = d;
        printf("%d\t",*(array_1[i]+j) );
        d++;
    }
    printf("\n");
}

for (i=0;i<5;i++){
   t=memcpy(array_2[i],array_1[i],5*sizeof(int));
}

printf("second matrix is-:\n");

for(i=0;i<5;i++){
    for(j=0;j<5;j++){

        printf("%d\t",array_2[i][j] );

    }
    printf("\n");
}
printf("\n");
printf("first matrix is-: \n");

for(i=0;i<5;i++){
    for(j=0;j<5;j++){

        printf("%d\t",array_1[i][j] );

    }
    printf("\n");
}
printf("\n");

for(i=0;i<5;i++)
    free(array_1[i]);

for(i=0;i<5;i++)
    free(array_2[i]);

return 0;
}
