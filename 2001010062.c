#include<stdio.h>
#include<stdlib.h>

struct student{
    int *num;
    char *arr; 
};

void reverseprint(char *str,int n){
    
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
     struct student s;
     s.num = (int*)malloc(10*sizeof(int));
     s.arr = (char*)malloc(200*sizeof(char));
     int n;
     scanf("%d",&n);
     for(int i=0; i<10; i++){
         scanf("%d",&s.num[i]);
     }
     for(int i=0; i<n; i++){
         char str[10];
         scanf("%[^\n]%*c", s.arr);
         for (int j = 0; j < 10; j++){
             str[j] = s.arr[s.num[j]];
         }
         reverseprint(str,10);
     }

}