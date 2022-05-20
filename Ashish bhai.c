#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
    char *ptr[10];
    for(int i=0; i<10; i++){
    	ptr[i]=(char*)malloc(5*sizeof(char));
    }
    
    char *arr[10];
    for(int i=0; i<10; i++){
    	arr[i]=(char*)malloc(5*sizeof(char));
    }
    
   int x=0;
   for(int i=0; i<10; i++){
   	   	for(int j=0; j<5; j++){
     		*(ptr[i]+j)='A'+ x;
     		x++;
     	    if(x==26)
     		x=0;
     	
     	}
   }
 
   for(int i=0; i<10; i++){
     	for(int j=0; j<5; j++){
     		 printf("%c ",*(ptr[i]+j));
     	}
    } 
    
    for(int i=0; i<10; i++)
    memcpy(arr[i], ptr[i], sizeof(ptr[i]));
    
     free(ptr[3]);
     
    char *array[10];
    for(int i=0; i<10; i++){
    	array[i]=(char*)malloc(5*sizeof(char));
    }
   
    for(int i=0; i<10; i++)
    memcpy(array[i], ptr[i], sizeof(ptr[i]));
    
     printf("\n");
     for(int i=0; i<10; i++){
     	for(int j=0; j<5; j++){
     		 printf("%c ",*(array[i]+j));
     	}
    } 
    
    for(int i=0; i<10; i++){
      free(arr[i]);
      free(array[i]);
      if(i==3)
      continue;
      free(ptr[i]);
      
    }
   
	return 0;
}

