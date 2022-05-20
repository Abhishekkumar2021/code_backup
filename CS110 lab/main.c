#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    double x;
    char a,b;
    scanf("%lf %c %c",&x, &a, &b);
    //solution by if else statement...........
     if (a=='P')
    {
         if(b=='E')
         {
             double  t = pow(2,-10)*x;
             printf("%lf E",t);
         }
        else if(b=='P')
         {
         double t = x;
             printf("%lf P",t);
         }
          else if(b=='T')
         {
             double t = pow(2,10)*x;
             printf("%lf T",t);
         }
        else if(b=='G')
         {
          double t = pow(2,20)*x;
             printf("%lf G",t);
         }
        else if(b=='M')
         {
             double t = pow(2,30)*x;
             printf("%lf M",t);
         }
        else if(b=='K')
         {
             double t = pow(2,40)*x;
             printf("%lf K",t);
         }
        else if(b=='B')
         {
            double  t = pow(2,50)*x;
             printf("%lf B",t);
         }
        else if(b=='b')
         {
            double  t =pow(2,53)*x;
             printf("%lf b",t);
         }
         else
          printf("invalid !")  ;
    }
    else  if(a=='T')
    {
         if(b=='E')
         {
             double  t = pow(2,-20)*x;
             printf("%lf E",t);
         }
        else if(b=='P')
         {
         double t = pow(2,-10)*x;
             printf("%lf P",t);
         }
          else if(b=='T')
         {
             double t = x;
             printf("%lf T",t);
         }
        else if(b=='G')
         {
          double t = pow(2,10)*x;
             printf("%lf G",t);
         }
        else if(b=='M')
         {
             double t = pow(2,20)*x;
             printf("%lf M",t);
         }
        else if(b=='K')
         {
             double t = pow(2,30)*x;
             printf("%lf K",t);
         }
        else if(b=='B')
         {
            double  t = pow(2,40)*x;
             printf("%lf B",t);
         }
        else if(b=='b')
         {
            double  t =pow(2,43)*x;
             printf("%lf b",t);
         }
         else
          printf("invalid !")  ;
    }
   else  if(a=='E')
    {
         if(b=='E')
         {
             double  t = x;
             printf("%lf E",t);
         }
        else if(b=='P')
         {
         double t = pow(2,10)*x;
             printf("%lf P",t);
         }
          else if(b=='T')
         {
             double t = pow(2,20)*x;
             printf("%lf T",t);
         }
        else if(b=='G')
         {
          double t = pow(2,30)*x;
             printf("%lf G",t);
         }
        else if(b=='M')
         {
             double t = pow(2,40)*x;
             printf("%lf M",t);
         }
        else if(b=='K')
         {
             double t = pow(2,50)*x;
             printf("%lf K",t);
         }
        else if(b=='B')
         {
            double  t = pow(2,60)*x;
             printf("%lf B",t);
         }
        else if(b=='b')
         {
            double  t =pow(2,63)*x;
             printf("%lf b",t);
         }
         else
          printf("invalid !")  ;
    }
        else  if(a=='G')
    {
         if(b=='E')
         {
             double  t = pow(2,-30)*x;
             printf("%lf E",t);
         }
        else if(b=='P')
         {
         double t = pow(2,-20)*x;
             printf("%lf P",t);
         }
          else if(b=='T')
         {
             double t =pow(2,-10)* x;
             printf("%lf T",t);
         }
        else if(b=='G')
         {
          double t = x;
             printf("%lf G",t);
         }
        else if(b=='M')
         {
             double t = pow(2,10)*x;
             printf("%lf M",t);
         }
        else if(b=='K')
         {
             double t = pow(2,20)*x;
             printf("%lf K",t);
         }
        else if(b=='B')
         {
            double  t = pow(2,30)*x;
             printf("%lf B",t);
         }
        else if(b=='b')
         {
            double  t =pow(2,33)*x;
             printf("%lf b",t);
         }
         else
          printf("invalid !")  ;
    }

       else  if(a=='K')
    {
         if(b=='E')
         {
             double  t = pow(2,-50)*x;
             printf("%lf E",t);
         }
        else if(b=='P')
         {
         double t = pow(2,-40)*x;
             printf("%lf P",t);
         }
          else if(b=='T')
         {
             double t =pow(2,-30)* x;
             printf("%lf T",t);
         }
        else if(b=='G')
         {
          double t = pow(2,-20)*x;
             printf("%lf G",t);
         }
        else if(b=='M')
         {
             double t = pow(2,-10)*x;
             printf("%lf M",t);
         }
        else if(b=='K')
         {
             double t = x;
             printf("%lf K",t);
         }
        else if(b=='B')
         {
            double  t = pow(2,10)*x;
             printf("%lf B",t);
         }
        else if(b=='b')
         {
            double  t =pow(2,13)*x;
             printf("%lf b",t);
         }
         else
          printf("invalid !")  ;
    }
       else  if(a=='M')
    {
         if(b=='E')
         {
             double  t = pow(2,-40)*x;
             printf("%lf E",t);
         }
        else if(b=='P')
         {
         double t = pow(2,-30)*x;
             printf("%lf P",t);
         }
          else if(b=='T')
         {
             double t =pow(2,-20)* x;
             printf("%lf T",t);
         }
        else if(b=='G')
         {
          double t = pow(2,-10)*x;
             printf("%lf G",t);
         }
        else if(b=='M')
         {
             double t = x;
             printf("%lf M",t);
         }
        else if(b=='K')
         {
             double t = pow(2,10)*x;
             printf("%lf K",t);
         }
        else if(b=='B')
         {
            double  t = pow(2,20)*x;
             printf("%lf B",t);
         }
        else if(b=='b')
         {
            double  t =pow(2,23)*x;
             printf("%lf b",t);
         }
         else
          printf("invalid !")  ;
    }
    else  if(a=='B')
    {
         if(b=='E')
         {
             double  t = pow(2,-60)*x;
             printf("%lf E",t);
         }
        else if(b=='P')
         {
         double t = pow(2,-50)*x;
             printf("%lf P",t);
         }
          else if(b=='T')
         {
             double t =pow(2,-40)* x;
             printf("%lf T",t);
         }
        else if(b=='G')
         {
          double t = pow(2,-30)*x;
             printf("%lf G",t);
         }
        else if(b=='M')
         {
             double t = pow(2,-20)*x;
             printf("%lf M",t);
         }
        else if(b=='K')
         {
             double t = pow(2,-10)*x;
             printf("%lf K",t);
         }
        else if(b=='B')
         {
            double  t = x;
             printf("%lf B",t);
         }
        else if(b=='b')
         {
            double  t =pow(2,3)*x;
             printf("%lf b",t);
         }
         else
          printf("invalid !")  ;
    }
else  if(a=='b')
    {
         if(b=='E')
         {
             double  t = pow(2,-63)*x;
             printf("%lf E",t);
         }
        else if(b=='P')
         {
         double t = pow(2,-53)*x;
             printf("%lf P",t);
         }
          else if(b=='T')
         {
             double t =pow(2,-43)* x;
             printf("%lf T",t);
         }
        else if(b=='G')
         {
          double t = pow(2,-33)*x;
             printf("%lf G",t);
         }
        else if(b=='M')
         {
             double t = pow(2,-23)*x;
             printf("%lf M",t);
         }
        else if(b=='K')
         {
             double t = pow(2,-13)*x;
             printf("%lf K",t);
         }
        else if(b=='B')
         {
            double  t = pow(2,-3)*x;
             printf("%lf B",t);
         }
        else if(b=='b')
         {
            double  t =x;
             printf("%lf b",t);
         }
         else
          printf("invalid !")  ;
    }
    //solution code using switch case statement................
   printf("\n");
    double t;
    switch(a)
    {
        case 'E' :  switch(b)
                       {
                           case 'E' :    t = x;
                                                printf("%lf E",t);
                                                break;
                           case 'P' :     t = pow(2,10)*x;
                                                printf("%lf P",t);
                                                break;
                           case 'T' :      t = pow(2,20)*x;
                                                 printf("%lf T",t);
                                                 break;
                           case 'G' :     t =pow(2,30)* x;
                                                 printf("%lf G",t);
                                                 break;
                           case 'M' :     t = pow(2,40)*x;
                                                 printf("%lf M",t);
                                                 break;
                           case 'K' :      t = pow(2,50)*x;
                                                 printf("%lf K",t);
                                                 break;
                          case 'B' :       t = pow(2,60)*x;
                                                 printf("%lf B",t);
                                                 break;
                           case 'b' :       t = pow(2,63)*x;
                                                 printf("%lf b",t);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;

        case 'T' :  switch(b)
                       {
                           case 'E' :    t = pow(2,-20)*x;
                                                printf("%lf E",t);
                                                break;
                           case 'P' :     t = pow(2,-10)*x;
                                                printf("%lf P",t);
                                                break;
                           case 'T' :      t = x;
                                                 printf("%lf T",t);
                                                 break;
                           case 'G' :     t =pow(2,10)* x;
                                                 printf("%lf G",t);
                                                 break;
                           case 'M' :     t = pow(2,20)*x;
                                                 printf("%lf M",t);
                                                 break;
                           case 'K' :      t = pow(2,30)*x;
                                                 printf("%lf K",t);
                                                 break;
                          case 'B' :       t = pow(2,40)*x;
                                                 printf("%lf B",t);
                                                 break;
                           case 'b' :       t = pow(2,43)*x;
                                                 printf("%lf b",t);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
        case 'G' :  switch(b)
                       {
                           case 'E' :    t =pow(2,-30)* x;
                                                printf("%lf E",t);
                                                break;
                           case 'P' :     t =pow(2,-20)* x;
                                                printf("%lf P",t);
                                                break;
                           case 'T' :      t = pow(2,-10)*x;
                                                 printf("%lf T",t);
                                                 break;
                           case 'G' :     t = x;
                                                 printf("%lf G",t);
                                                 break;
                           case 'M' :     t = pow(2,10)*x;
                                                 printf("%lf M",t);
                                                 break;
                           case 'K' :      t = pow(2,20)*x;
                                                 printf("%lf K",t);
                                                 break;
                          case 'B' :       t = pow(2,30)*x;
                                                 printf("%lf B",t);
                                                 break;
                           case 'b' :       t = pow(2,33)*x;
                                                 printf("%lf b",t);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
        case 'M' :  switch(b)
                       {
                           case 'E' :    t =pow(2,-40)* x;
                                                printf("%lf E",t);
                                                break;
                           case 'P' :     t =pow(2,-30)* x;
                                                printf("%lf P",t);
                                                break;
                           case 'T' :      t = pow(2,-20)*x;
                                                 printf("%lf T",t);
                                                 break;
                           case 'G' :     t =pow(2,-10)*x;
                                                 printf("%lf G",t);
                                                 break;
                           case 'M' :     t = x;
                                                 printf("%lf M",t);
                                                 break;
                           case 'K' :      t = pow(2,10)*x;
                                                 printf("%lf K",t);
                                                 break;
                          case 'B' :       t = pow(2,20)*x;
                                                 printf("%lf B",t);
                                                 break;
                           case 'b' :       t = pow(2,23)*x;
                                                 printf("%lf b",t);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
     case 'P' :  switch(b)
                       {
                           case 'E' :    t =pow(2,-10)* x;
                                                printf("%lf E",t);
                                                break;
                           case 'P' :     t = x;
                                                printf("%lf P",t);
                                                break;
                           case 'T' :      t = pow(2,10)*x;
                                                 printf("%lf T",t);
                                                 break;
                           case 'G' :     t =pow(2,20)* x;
                                                 printf("%lf G",t);
                                                 break;
                           case 'M' :     t = pow(2,30)*x;
                                                 printf("%lf M",t);
                                                 break;
                           case 'K' :      t = pow(2,40)*x;
                                                 printf("%lf K",t);
                                                 break;
                          case 'B' :       t = pow(2,50)*x;
                                                 printf("%lf B",t);
                                                 break;
                           case 'b' :       t = pow(2,53)*x;
                                                 printf("%lf b",t);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
case 'B' :  switch(b)
                       {
                           case 'E' :    t =pow(2,-60)* x;
                                                printf("%lf E",t);
                                                break;
                           case 'P' :     t =pow(2,-50)* x;
                                                printf("%lf P",t);
                                                break;
                           case 'T' :      t = pow(2,-40)*x;
                                                 printf("%lf T",t);
                                                 break;
                           case 'G' :     t =pow(2,-30)*x;
                                                 printf("%lf G",t);
                                                 break;
                           case 'M' :     t = pow(2,-20)*x;
                                                 printf("%lf M",t);
                                                 break;
                           case 'K' :      t = pow(2,-10)*x;
                                                 printf("%lf K",t);
                                                 break;
                          case 'B' :       t = x;
                                                 printf("%lf B",t);
                                                 break;
                           case 'b' :       t = pow(2,3)*x;
                                                 printf("%lf b",t);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
        case 'K' :  switch(b)
                       {
                           case 'E' :    t =pow(2,-50)* x;
                                                printf("%lf E",t);
                                                break;
                           case 'P' :     t =pow(2,-40)* x;
                                                printf("%lf P",t);
                                                break;
                           case 'T' :      t = pow(2,-30)*x;
                                                 printf("%lf T",t);
                                                 break;
                           case 'G' :     t =pow(2,-20)*x;
                                                 printf("%lf G",t);
                                                 break;
                           case 'M' :     t = pow(2,-10)*x;
                                                 printf("%lf M",t);
                                                 break;
                           case 'K' :      t = x;
                                                 printf("%lf K",t);
                                                 break;
                          case 'B' :       t = pow(2,10)*x;
                                                 printf("%lf B",t);
                                                 break;
                           case 'b' :       t = pow(2,13)*x;
                                                 printf("%lf b",t);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
  case 'b' :  switch(b)
                       {
                           case 'E' :    t =pow(2,-63)* x;
                                                printf("%lf E",t);
                                                break;
                           case 'P' :     t =pow(2,-53)* x;
                                                printf("%lf P",t);
                                                break;
                           case 'T' :      t = pow(2,-43)*x;
                                                 printf("%lf T",t);
                                                 break;
                           case 'G' :     t =pow(2,-33)*x;
                                                 printf("%lf G",t);
                                                 break;
                           case 'M' :     t = pow(2,-23)*x;
                                                 printf("%lf M",t);
                                                 break;
                           case 'K' :      t = pow(2,-13)*x;
                                                 printf("%lf K",t);
                                                 break;
                          case 'B' :       t = pow(2,-3)*x;
                                                 printf("%lf B",t);
                                                 break;
                           case 'b' :       t = x;
                                                 printf("%lf b",t);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
    }
return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    double x;
    char a,b;
    scanf("%lf %c %c",&x, &a, &b);
    //solution by if else statement...........
     if (a=='P')
    {
         if(b=='E')
         {
             double  n = pow(2,-10)*x;
             printf("%lf E",n);
         }
        else if(b=='P')
         {
         double n = x;
             printf("%lf P",n);
         }
          else if(b=='T')
         {
             double n = pow(2,10)*x;
             printf("%lf T",n);
         }
        else if(b=='G')
         {
          double n = pow(2,20)*x;
             printf("%lf G",n);
         }
        else if(b=='M')
         {
             double n = pow(2,30)*x;
             printf("%lf M",n);
         }
        else if(b=='K')
         {
             double n = pow(2,40)*x;
             printf("%lf K",n);
         }
        else if(b=='B')
         {
            double  n = pow(2,50)*x;
             printf("%lf B",n);
         }
        else if(b=='b')
         {
            double  n =pow(2,53)*x;
             printf("%lf b",n);
         }
         else
          printf("invalid !")  ;
    }
    else  if(a=='T')
    {
         if(b=='E')
         {
             double  n = pow(2,-20)*x;
             printf("%lf E",n);
         }
        else if(b=='P')
         {
         double n = pow(2,-10)*x;
             printf("%lf P",n);
         }
          else if(b=='T')
         {
             double n = x;
             printf("%lf T",n);
         }
        else if(b=='G')
         {
          double n = pow(2,10)*x;
             printf("%lf G",n);
         }
        else if(b=='M')
         {
             double n = pow(2,20)*x;
             printf("%lf M",n);
         }
        else if(b=='K')
         {
             double n = pow(2,30)*x;
             printf("%lf K",n);
         }
        else if(b=='B')
         {
            double  n = pow(2,40)*x;
             printf("%lf B",n);
         }
        else if(b=='b')
         {
            double  n =pow(2,43)*x;
             printf("%lf b",n);
         }
         else
          printf("invalid !")  ;
    }
   else  if(a=='E')
    {
         if(b=='E')
         {
             double  n = x;
             printf("%lf E",n);
         }
        else if(b=='P')
         {
         double n = pow(2,10)*x;
             printf("%lf P",n);
         }
          else if(b=='T')
         {
             double n = pow(2,20)*x;
             printf("%lf T",n);
         }
        else if(b=='G')
         {
          double n = pow(2,30)*x;
             printf("%lf G",n);
         }
        else if(b=='M')
         {
             double n = pow(2,40)*x;
             printf("%lf M",n);
         }
        else if(b=='K')
         {
             double n = pow(2,50)*x;
             printf("%lf K",n);
         }
        else if(b=='B')
         {
            double  n = pow(2,60)*x;
             printf("%lf B",n);
         }
        else if(b=='b')
         {
            double  n =pow(2,63)*x;
             printf("%lf b",n);
         }
         else
          printf("invalid !")  ;
    }
        else  if(a=='G')
    {
         if(b=='E')
         {
             double  n = pow(2,-30)*x;
             printf("%lf E",n);
         }
        else if(b=='P')
         {
         double n = pow(2,-20)*x;
             printf("%lf P",n);
         }
          else if(b=='T')
         {
             double n =pow(2,-10)* x;
             printf("%lf T",n);
         }
        else if(b=='G')
         {
          double n = x;
             printf("%lf G",n);
         }
        else if(b=='M')
         {
             double n = pow(2,10)*x;
             printf("%lf M",n);
         }
        else if(b=='K')
         {
             double n = pow(2,20)*x;
             printf("%lf K",n);
         }
        else if(b=='B')
         {
            double  n = pow(2,30)*x;
             printf("%lf B",n);
         }
        else if(b=='b')
         {
            double  n =pow(2,33)*x;
             printf("%lf b",n);
         }
         else
          printf("invalid !")  ;
    }

       else  if(a=='K')
    {
         if(b=='E')
         {
             double  n = pow(2,-50)*x;
             printf("%lf E",n);
         }
        else if(b=='P')
         {
         double n = pow(2,-40)*x;
             printf("%lf P",n);
         }
          else if(b=='T')
         {
             double n =pow(2,-30)* x;
             printf("%lf T",n);
         }
        else if(b=='G')
         {
          double n = pow(2,-20)*x;
             printf("%lf G",n);
         }
        else if(b=='M')
         {
             double n = pow(2,-10)*x;
             printf("%lf M",n);
         }
        else if(b=='K')
         {
             double n = x;
             printf("%lf K",n);
         }
        else if(b=='B')
         {
            double  n = pow(2,10)*x;
             printf("%lf B",n);
         }
        else if(b=='b')
         {
            double  n =pow(2,13)*x;
             printf("%lf b",n);
         }
         else
          printf("invalid !")  ;
    }
       else  if(a=='M')
    {
         if(b=='E')
         {
             double  n = pow(2,-40)*x;
             printf("%lf E",n);
         }
        else if(b=='P')
         {
         double n = pow(2,-30)*x;
             printf("%lf P",n);
         }
          else if(b=='T')
         {
             double n =pow(2,-20)* x;
             printf("%lf T",n);
         }
        else if(b=='G')
         {
          double n = pow(2,-10)*x;
             printf("%lf G",n);
         }
        else if(b=='M')
         {
             double n = x;
             printf("%lf M",n);
         }
        else if(b=='K')
         {
             double n = pow(2,10)*x;
             printf("%lf K",n);
         }
        else if(b=='B')
         {
            double  n = pow(2,20)*x;
             printf("%lf B",n);
         }
        else if(b=='b')
         {
            double  n =pow(2,23)*x;
             printf("%lf b",n);
         }
         else
          printf("invalid !")  ;
    }
    else  if(a=='B')
    {
         if(b=='E')
         {
             double  n = pow(2,-60)*x;
             printf("%lf E",n);
         }
        else if(b=='P')
         {
         double n = pow(2,-50)*x;
             printf("%lf P",n);
         }
          else if(b=='T')
         {
             double n =pow(2,-40)* x;
             printf("%lf T",n);
         }
        else if(b=='G')
         {
          double n = pow(2,-30)*x;
             printf("%lf G",n);
         }
        else if(b=='M')
         {
             double n = pow(2,-20)*x;
             printf("%lf M",n);
         }
        else if(b=='K')
         {
             double n = pow(2,-10)*x;
             printf("%lf K",n);
         }
        else if(b=='B')
         {
            double  n = x;
             printf("%lf B",n);
         }
        else if(b=='b')
         {
            double  n =pow(2,3)*x;
             printf("%lf b",n);
         }
         else
          printf("invalid !")  ;
    }
else  if(a=='b')
    {
         if(b=='E')
         {
             double  n = pow(2,-63)*x;
             printf("%lf E",n);
         }
        else if(b=='P')
         {
         double n = pow(2,-53)*x;
             printf("%lf P",n);
         }
          else if(b=='T')
         {
             double n =pow(2,-43)* x;
             printf("%lf T",n);
         }
        else if(b=='G')
         {
          double n = pow(2,-33)*x;
             printf("%lf G",n);
         }
        else if(b=='M')
         {
             double n = pow(2,-23)*x;
             printf("%lf M",n);
         }
        else if(b=='K')
         {
             double n = pow(2,-13)*x;
             printf("%lf K",n);
         }
        else if(b=='B')
         {
            double  n = pow(2,-3)*x;
             printf("%lf B",n);
         }
        else if(b=='b')
         {
            double  n =x;
             printf("%lf b",n);
         }
         else
          printf("invalid !")  ;
    }
    //solution code using switch case statement................
   printf("\n");
    double n;
    switch(a)
    {
        case 'E' :  switch(b)
                       {
                           case 'E' :    n = x;
                                                printf("%lf E",n);
                                                break;
                           case 'P' :     n = pow(2,10)*x;
                                                printf("%lf P",n);
                                                break;
                           case 'T' :      n = pow(2,20)*x;
                                                 printf("%lf T",n);
                                                 break;
                           case 'G' :     n =pow(2,30)* x;
                                                 printf("%lf G",n);
                                                 break;
                           case 'M' :     n = pow(2,40)*x;
                                                 printf("%lf M",n);
                                                 break;
                           case 'K' :      n = pow(2,50)*x;
                                                 printf("%lf K",n);
                                                 break;
                          case 'B' :       n = pow(2,60)*x;
                                                 printf("%lf B",n);
                                                 break;
                           case 'b' :       n = pow(2,63)*x;
                                                 printf("%lf b",n);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;

        case 'T' :  switch(b)
                       {
                           case 'E' :    n = pow(2,-20)*x;
                                                printf("%lf E",n);
                                                break;
                           case 'P' :     n = pow(2,-10)*x;
                                                printf("%lf P",n);
                                                break;
                           case 'T' :      n = x;
                                                 printf("%lf T",n);
                                                 break;
                           case 'G' :     n =pow(2,10)* x;
                                                 printf("%lf G",n);
                                                 break;
                           case 'M' :     n = pow(2,20)*x;
                                                 printf("%lf M",n);
                                                 break;
                           case 'K' :      n = pow(2,30)*x;
                                                 printf("%lf K",n);
                                                 break;
                          case 'B' :       n = pow(2,40)*x;
                                                 printf("%lf B",n);
                                                 break;
                           case 'b' :       n = pow(2,43)*x;
                                                 printf("%lf b",n);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
        case 'G' :  switch(b)
                       {
                           case 'E' :    n =pow(2,-30)* x;
                                                printf("%lf E",n);
                                                break;
                           case 'P' :     n =pow(2,-20)* x;
                                                printf("%lf P",n);
                                                break;
                           case 'T' :      n = pow(2,-10)*x;
                                                 printf("%lf T",n);
                                                 break;
                           case 'G' :     n = x;
                                                 printf("%lf G",n);
                                                 break;
                           case 'M' :     n = pow(2,10)*x;
                                                 printf("%lf M",n);
                                                 break;
                           case 'K' :      n = pow(2,20)*x;
                                                 printf("%lf K",n);
                                                 break;
                          case 'B' :       n = pow(2,30)*x;
                                                 printf("%lf B",n);
                                                 break;
                           case 'b' :       n = pow(2,33)*x;
                                                 printf("%lf b",n);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
        case 'M' :  switch(b)
                       {
                           case 'E' :    n =pow(2,-40)* x;
                                                printf("%lf E",n);
                                                break;
                           case 'P' :     n =pow(2,-30)* x;
                                                printf("%lf P",n);
                                                break;
                           case 'T' :      n = pow(2,-20)*x;
                                                 printf("%lf T",n);
                                                 break;
                           case 'G' :     n =pow(2,-10)*x;
                                                 printf("%lf G",n);
                                                 break;
                           case 'M' :     n = x;
                                                 printf("%lf M",n);
                                                 break;
                           case 'K' :      n = pow(2,10)*x;
                                                 printf("%lf K",n);
                                                 break;
                          case 'B' :       n = pow(2,20)*x;
                                                 printf("%lf B",n);
                                                 break;
                           case 'b' :       n = pow(2,23)*x;
                                                 printf("%lf b",n);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
     case 'P' :  switch(b)
                       {
                           case 'E' :    n =pow(2,-10)* x;
                                                printf("%lf E",n);
                                                break;
                           case 'P' :     n = x;
                                                printf("%lf P",n);
                                                break;
                           case 'T' :      n = pow(2,10)*x;
                                                 printf("%lf T",n);
                                                 break;
                           case 'G' :     n =pow(2,20)* x;
                                                 printf("%lf G",n);
                                                 break;
                           case 'M' :     n = pow(2,30)*x;
                                                 printf("%lf M",n);
                                                 break;
                           case 'K' :      n = pow(2,40)*x;
                                                 printf("%lf K",n);
                                                 break;
                          case 'B' :       n = pow(2,50)*x;
                                                 printf("%lf B",n);
                                                 break;
                           case 'b' :       n = pow(2,53)*x;
                                                 printf("%lf b",n);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
case 'B' :  switch(b)
                       {
                           case 'E' :    n =pow(2,-60)* x;
                                                printf("%lf E",n);
                                                break;
                           case 'P' :     n =pow(2,-50)* x;
                                                printf("%lf P",n);
                                                break;
                           case 'T' :      n = pow(2,-40)*x;
                                                 printf("%lf T",n);
                                                 break;
                           case 'G' :     n =pow(2,-30)*x;
                                                 printf("%lf G",n);
                                                 break;
                           case 'M' :     n = pow(2,-20)*x;
                                                 printf("%lf M",n);
                                                 break;
                           case 'K' :      n = pow(2,-10)*x;
                                                 printf("%lf K",n);
                                                 break;
                          case 'B' :       n = x;
                                                 printf("%lf B",n);
                                                 break;
                           case 'b' :       n = pow(2,3)*x;
                                                 printf("%lf b",n);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
        case 'K' :  switch(b)
                       {
                           case 'E' :    n =pow(2,-50)* x;
                                                printf("%lf E",n);
                                                break;
                           case 'P' :     n =pow(2,-40)* x;
                                                printf("%lf P",n);
                                                break;
                           case 'T' :      n = pow(2,-30)*x;
                                                 printf("%lf T",n);
                                                 break;
                           case 'G' :     n =pow(2,-20)*x;
                                                 printf("%lf G",n);
                                                 break;
                           case 'M' :     n = pow(2,-10)*x;
                                                 printf("%lf M",n);
                                                 break;
                           case 'K' :      n = x;
                                                 printf("%lf K",n);
                                                 break;
                          case 'B' :       n = pow(2,10)*x;
                                                 printf("%lf B",n);
                                                 break;
                           case 'b' :       n = pow(2,13)*x;
                                                 printf("%lf b",n);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
  case 'b' :  switch(b)
                       {
                           case 'E' :    n =pow(2,-63)* x;
                                                printf("%lf E",n);
                                                break;
                           case 'P' :     n =pow(2,-53)* x;
                                                printf("%lf P",n);
                                                break;
                           case 'T' :      n = pow(2,-43)*x;
                                                 printf("%lf T",n);
                                                 break;
                           case 'G' :     n =pow(2,-33)*x;
                                                 printf("%lf G",n);
                                                 break;
                           case 'M' :     n = pow(2,-23)*x;
                                                 printf("%lf M",n);
                                                 break;
                           case 'K' :      n = pow(2,-13)*x;
                                                 printf("%lf K",n);
                                                 break;
                          case 'B' :       n = pow(2,-3)*x;
                                                 printf("%lf B",n);
                                                 break;
                           case 'b' :       n = x;
                                                 printf("%lf b",n);
                                                 break;
                            default :     printf("invalid");
                        }
                       break;
    }
return 0;
}
*/


