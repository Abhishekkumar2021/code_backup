int main(int argc, char *argv[])
{
    FILE *fin;
    long nc,n1;
    int c;
    
    fin=fopen(argv[1],"r");
    FILE *fout=fopen(argv[2],"w");
    nc=n1=0;
    while((c=fgetc(fin))!=EOF)
    {
        ++nc;
        
        if(c == '\n')
         ++n1;
    } 
    int t,x,y,m=1;
    char n,o,p,q;
    fscanf(fin, "%c%c%d", &n,&o,&x);
     fscanf(fin, " %c%c%d", &p,&q,&y);
        
         char part1[100];
    		sprintf(part1,"200101014-AL1-cx-output%d.txt",p);
    		FILE *fs = fopen(part1,"w");
    		for(int j=0; j<x; j++){
                 if(t == '\n')
                     t=' ';
                 fputc(t,fs);
    	fclose(fp);
    	 fclose(inptr);

    }


        int n,q=1;
        FILE *inptr = fopen("week15-AL1-input1.txt","r");
         if(inptr==NULL)
    	fputs("Input File doesn't opened or doesn't exist.\n",outptr);
    else{
          fscanf(inptr, "%*c%*c%*d");
          fscanf(inptr, " %*c%*c%*d");
          int temp = fgetc(inptr);
    	  while ((n = fgetc(fin)) != EOF){
    		char part2[100];
    		sprintf(part2,"200101014-AL1-ly-output%d.txt",q);
    		FILE *fptr = fopen(part2,"w");
    		int newline = 0;
    		while(newline<y){
                 if(t == '\n')
                    newline++;
                 fputc(n,fptr);
                 if((n = fgetc(fin))==EOF)
                 	break;   
    		}
    		fclose(fin);
    		q++;
    	}
          fclose(fin);
      }
    fprintf(fout,"The number of characters in the given input file file are : %ld\n",nc);
    fprintf(fout,"The number of lines in the given input file are : %ld\n",n1);
     fclose(fout);
    
  return 0;   
}