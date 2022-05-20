#include <stdio.h>
#include <stdlib.h>
 struct student{
    char* arr;
    int* num;
};

int main()
{   freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int k,n;
    scanf("%d",&n); 
    struct student s;

    s.arr =(char*)malloc(200*sizeof(char));
    s.num =(int*)malloc(10*sizeof(int));

    for(int i=0;i<10;i++){
        //reading which the position of characters that we need
        scanf("%d",&s.num[i]);
    }
    for(int i=0;i<n;i++){
        scanf(" %[^\n]",s.arr);
        int size=0;
        char str[200];
       for(int j=0; s.arr[j]!='\0'; j++){
          for(int k=0; k<10; k++){
              if(s.num[k]-1==j)
                j++;
           }
           str[size]=s.arr[j];
           size++;
       }  
       int space = 100 - size;
       for(int s=0; s<space; s++){
        printf(" ");
       }
       for(int k=0; k<size; k++){
           printf("%c",str[size-k-1]);
       } 
      
         printf("\n");
    }
    //freeing the allocated memory......
    free(s.arr);
    free(s.num);

    return 0;
}
