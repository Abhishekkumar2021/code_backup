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
    k=getchar();  //for scanning the endline.......
  
    struct student s;

    s.arr =(char*)malloc(200*sizeof(char));
    s.num =(int*)malloc(10*sizeof(int));

    for(int i=0;i<10;i++){
        //reading which the position of characters that we need
        scanf("%d",&s.num[i]);
    }
    k=getchar();  //for scanning endline....
    char str[10];
    for(int i=0;i<n;i++){
        scanf(" %[^\n]",s.arr);
        for(int j=0;j<10;j++){
            str[j]=s.arr[2*j];
        }
        for(int j=9;j>=0;j--){
            printf("%c",str[j]);
        }
    printf("\n");
    }
    //freeing the allocated memory......
    free(s.arr);
    free(s.num);

    return 0;
}
