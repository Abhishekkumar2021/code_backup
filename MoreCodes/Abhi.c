#include <stdio.h>
#include <stdlib.h>
 
 struct Data{
    char* arr;
    int* num;
};

int main()
{   freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf("%d",&n); 
    struct Data D;
    D.arr =(char*)malloc(200*sizeof(char));
    D.num =(int*)malloc(10*sizeof(int));
    for(int i=0;i<10;i++){
        scanf("%d",&D.num[i]);
    }
    for(int i=0;i<n;i++){
        scanf(" %[^\n]",D.arr);
        int size=0;
        char str[200];
       for(int j=0; D.arr[j]!='\0'; j++){
          for(int k=0; k<10; k++){
              if(D.num[k]-1==j)
                j++;
           }
           str[size]=D.arr[j];
           size++;
       }  
       int blank = 100 - size;
       for(int s=0; s<blank; s++){
        printf(" ");
       }
       for(int k=0; k<size; k++){
           printf("%c",str[size-k-1]);
       } 
      
         printf("\n");
    }
    free(D.arr);
    free(D.num);
    return 0;
}
