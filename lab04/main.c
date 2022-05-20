#include <stdio.h>
#include <stdlib.h>

int main()
{
   double x;
   char a,b;
   scanf(" %lf %c %c",&x ,&a,&b);
	if(a=='F')
    {
        if (b=='F')
        printf("%lf \n",x);
        else if (b=='Y')
        printf("%lf \n",x/9);
        else if  (b=='M')
        printf("%lf \n",x/10.76391041671 );
        else if  (b=='A')
        printf("%lf \n",x/ 43560 );
        else if  (b=='H')
        printf("%lf \n",x/ 107639.1041671 );
        else if  (b=='I')
        printf("%lf  \n",x/ 0.0069444444444444);
        else if  (b=='C')
        printf("%lf \n",x/ 435.6);
        else("invalid");
     }
     else if (a=='Y')
     {
        if (b=='F')
        printf("%lf  \n",9*x);
        else if (b=='Y')
        printf("%lf  \n",x);
        else if  (b=='M')
        printf("%lf  \n",(x/ 10.76391041671)*9 );
        else if  (b=='A')
        printf("%lf  \n",(9*x)/43560 );
        else if  (b=='H')
        printf("%lf  \n", (9*x)/ 107639.1041671);
        else if  (b=='I')
        printf("%lf  \n", (9*x)/ 0.0069444444444444);
        else if  (b=='C')
        printf("%lf  \n", (9*x)/ 435.6 );
        else("invalid");
     }
      else if (a=='M')
     {
        if (b=='F')
        printf("%lf  \n", 10.76391041671*x);
        else if (b=='Y')
        printf("%lf  \n",( x*10.76391041671 )/9);
        else if  (b=='M')
        printf("%lf  \n",x);
        else if  (b=='A')
        printf("%lf  \n", ( x*10.76391041671 )/43560);
        else if  (b=='H')
        printf("%lf  \n",( x*10.76391041671 )/107639.1041671);
        else if  (b=='I')
        printf("%lf  \n",( x*10.76391041671 )/ 0.0069444444444444);
        else if  (b=='C')
        printf("%lf  \n",( x*10.76391041671 )/435.6 );
        else("invalid");
     }
      else if (a=='A')
     {
        if (b=='F')
        printf("%lf  \n",43560*x);
        else if (b=='Y')
        printf("%lf  \n",(43560*x)/9);
        else if  (b=='M')
        printf("%lf  \n",(43560*x)/10.76391041671 );
        else if  (b=='A')
        printf("%lf  \n",(43560*x)/ 43560 );
        else if  (b=='H')
        printf("%lf  \n",(43560*x)/ 107639.1041671 );
        else if  (b=='I')
        printf("%lf  \n",(43560*x)/ 0.0069444444444444);
        else if  (b=='C')
        printf("%lf  \n",(43560*x)/ 435.6);
        else("invalid");
     }
      else if (a=='H')
     {
        if (b=='F')
        printf("%lf  \n",107639.1041671*x);
        else if (b=='Y')
        printf("%lf  \n",(107639.1041671*x)/9);
        else if  (b=='M')
        printf("%lf  \n",(107639.1041671*x)/10.76391041671 );
        else if  (b=='A')
        printf("%lf  \n",(107639.1041671*x)/ 43560 );
        else if  (b=='H')
        printf("%lf  \n",x);
        else if  (b=='I')
        printf("%lf  \n",(107639.1041671*x)/ 0.0069444444444444);
        else if  (b=='C')
        printf("%lf  \n",(107639.1041671*x)/ 435.6);
        else("invalid");
     }
     if(a=='I')
    {
        if (b=='F')
        printf("%lf \n",0.0069444444444444 *x);
        else if (b=='Y')
        printf("%lf \n",(0.0069444444444444 *x)/9);
        else if  (b=='M')
        printf("%lf \n",(0.0069444444444444 *x)/10.76391041671 );
        else if  (b=='A')
        printf("%lf \n",(0.0069444444444444 *x)/ 43560 );
        else if  (b=='H')
        printf("%lf \n",(0.0069444444444444 *x)/ 107639.1041671 );
        else if  (b=='I')
        printf("%lf  \n",x);
        else if  (b=='C')
        printf("%lf \n",(0.0069444444444444 *x)/ 435.6);
        else("invalid");
     }
     if(a=='C')
    {
        if (b=='F')
        printf("%lf \n",x* 435.6);
        else if (b=='Y')
        printf("%lf \n",(x* 435.6)/9);
        else if  (b=='M')
        printf("%lf \n",(x* 435.6)/10.76391041671 );
        else if  (b=='A')
        printf("%lf \n",(x* 435.6)/ 43560 );
        else if  (b=='H')
        printf("%lf \n",(x* 435.6)/ 107639.1041671 );
        else if  (b=='I')
        printf("%lf  \n",(x* 435.6)/ 0.0069444444444444);
        else if  (b=='C')
        printf("%lf \n",x);
        else("invalid");
     }
 return 0;
}
