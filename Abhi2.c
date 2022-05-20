#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  char *s;
  s=(char*)malloc(100*sizeof(char));
  // scanf("%[^\n]%*c",s);//
  gets(s);
  int i=0,n=strlen(s);
  for(i;i<n;i++){
    printf("%c",s[i]);
    if (s[i] == ' ')
        printf("\n");
  }
  return 0;
}