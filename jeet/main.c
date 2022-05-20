
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char a,b,c,d;
    scanf("%d %c %c %c %c %d",&x,&a,&b,&c,&d,&y);
    long int rollno=x/100;
    switch(a)
    {
        case 'B': switch (b)
                      {
                          case 'T' : rollno=rollno*100+1;
                                         break;
                         case 'D' : rollno=rollno*100+2;
                                         break;
                      }
                      break;
        case 'M' : switch(b)
                        {
                            case 'T' : rollno=rollno*100+41;
                                           break;
                        }
                        break;
       case 'P' :  switch(b)
                      {
                         case 'D' :  rollno=rollno*100+61;
                                         break;
                      }
                      break;
    }
    switch(c)
    {
        case 'C' : switch(d)
                        {
                            case 'S' : rollno=rollno*100+1;
                                           break;
                            case 'E' : rollno=rollno*100+4;
                                           break;
                           case 'L' : rollno=rollno*100+7;
                                           break;
                            case 'T' : rollno=rollno*100+22;
                                           break;
                        }
                        break;
        case 'M' : switch(d)
                        {
                            case 'E' : rollno=rollno*100+3;
                                           break;
                           case 'T' : rollno=rollno*100+23;
                                           break;
                        }
                        break;
          case 'E' : switch(d)
                        {
                            case 'E' : rollno=rollno*100+8;
                                           break;
                           case 'C' : rollno=rollno*100+2;
                                           break;
                            case 'P' : rollno=rollno*100+21;
                                           break;
                        }
                        break;
         case 'D' : switch(d)
                        {

                            case 'D' : rollno=rollno*100+5;
                                           break;
                        }
                        break;
       case 'B' : switch(d)
                        {

                            case 'S' : rollno=rollno*100+6;
                                           break;
                        }
                        break;
    }
    rollno=rollno*1000+y;
    printf("%ld",rollno);
    return 0;
}

