#include <stdio.h>
#include <stdlib.h>
 struct student{
    char* arr;
    int* num;
};

int main()
{   freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
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
       for(int j=0; s.arr[j]!='\0'; j++){
        for(int k=0; k<10; k++){
              if(s.num[k]-1==j)
                j++;
        }
         printf("%c",s.arr[j]);
       }   
         printf("\n");
    }
    //freeing the allocated memory......
    free(s.arr);
    free(s.num);

    return 0;
}
