#include <stdio.h>
#include <stdlib.h>
int islabcourse(int a, int b, int c, int d){
 if(a==0 && b>=0 && c>0 && d>0)
    return 1;
 else
    return 0;
}
int istheorycourse(int m,int n, int o, int p){
 if(m>0 && n>=0 && o>=0 && p>=0)
    return 1;
 else
    return 0;
}
int iselectivecourse(int t){
 if(t>400)
    return 1;
 else
    return 0;
}
int iscorecourse(int x){
if(x<400)
    return 1;
 else
    return 0;
}
int isSAcourse(int u,int v, int w, int z){
   if(u>=0 && v>=0 && w>=0 && z==0)
     return 1;
 else
    return 0;
}

int main()
{
    int lhc=0,thc=0,phc=0,cr=0,lcr=0,tcr=0,ecr=0,ccr=0,sacr=0;
    int cn,lh,th,ph,c;
    while(5)
    {
        scanf("%d %d %d %d %d",&cn,&lh,&th,&ph,&c);
        if(cn==0 && lh==0 && th==0 && ph==0 && c==0)
            break;
      else
    {
        lhc+=lh;
        thc+=th;
        if(c!=0)
        phc+=ph;
        cr+=c;
         if(islabcourse(lh,th,ph,c))
            lcr++;
         if(istheorycourse(lh,th,ph,c))
            tcr++;
          if(iselectivecourse(cn))
            ecr++;
         if(iscorecourse(cn))
            ccr++;
         if(isSAcourse(lh,th,ph,c))
            sacr++;
      }
    }
   printf("1.  Total number of lecture hours credited : %d\n",lhc);
   printf("2.  Total number of tutorial hours credited :%d\n",thc);
   printf("3.  Total number of practical hours credited : %d\n",phc);
   printf("4.  Total number of credits registered :  %d\n",cr);
   printf("5.  Number of lab courses registered : %d\n",lcr);
   printf("6.  Number of theory courses registered : %d\n",tcr);
   printf("7.  Number of elective courses registered : %d\n",ecr);
   printf("8.  Number of core courses registered : %d\n",ccr);
   printf("9.  Number of SA courses registered : %d\n",sacr);
    return 0;

}
