#include<stdio.h>
int main(){
  FILE *inptr =fopen("input.txt","r");
  FILE *outptr =fopen("output.txt","w");
  char ch;
  if(inptr==NULL)
    fprintf(outptr,"File doesn't exist\n");
else{
    char name[20],item[20],outlet[40];
    fscanf(inptr,"%[^\n]",name);
    ch = fgetc(inptr);  //to grab the newline.
    fscanf(inptr,"%[^\n]",item);
    ch = fgetc(inptr); //to grab the newline
    fscanf(inptr,"%[^\n]",outlet);
    fprintf(outptr,"Thanks %s for purchasing %s from our %s\n",name,item,outlet);

}
fclose(inptr);
fclose(outptr);

  return 0;
}

