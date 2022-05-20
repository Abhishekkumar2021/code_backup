
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",(arr+i));
    }
    int row,col;
    scanf("%d %d",&row,&col);
    int array[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",(array[i]+j));
        }
    }
    int *ptr1, *ptr2;
    ptr1=arr;
    ptr2 = &arr[size-1];
    while(ptr1<=ptr2){
        int temp;
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1++;
        ptr2--;
    }
    ptr1=array[0];
    ptr2 = &array[row-1][col-1];
    while(ptr1<=ptr2){
        int temp;
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1++;
        ptr2--;
    }
    for(int i=0; i<size; i++)
    printf("%d ",*(arr+i));
    printf("\n");
    printf("\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",*(array[i]+j));
        }
        printf("\n");
    }
    return 0;

}
