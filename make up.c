#include<stdio.h>
int main()
{
  int i,j=0,a,b,c,d,e;
  for(i=100;i<999;i++)
  {
    a=i/10;
    b=i%10;
    c=a/10;
    d=a%10;
    b=b*b*b;
    c=c*c*c;
    d=d*d*d;
    e=b+c+d;
    if(i==e)
    printf("%d\n",i);

}
  return 0;
}
