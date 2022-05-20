#include <stdio.h>
#include <stdlib.h>

int main()
{
  char a,b;
   int s,e,f,t,j;
   int z=0,n=0,r=0,q=0;
   for(;;)
   {
       scanf("%c%c %d %d %d %d %d", &a,&b, &s, &e, &f, &t, &j);
       if(s==0&&e==0&&f==0&&t==0&&j==0)
       {
           break;
       }
       else if (a=='C' && b=='S'){
        z=z+e;
        n=n+f;
        r=r+t;
        q=q+j;
   }
   }
   printf(" CS Total number of lecture hours credited:%d\n",z);
    printf(" CS Total number of tutorial hours credited:%d\n",n);
   printf(" CS Total number of practical hours credited:%d\n",r);
    printf(" CS Total number of  credits registered:%d\n",q);

}
