#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f,x,y;
    printf("enter the coefficients of first equation ax+by=c : ");
    scanf("%f %f %f",&a,&b,&c);
    printf("enter the coefficients of second equation dx+ey=f : ");
    scanf("%f %f %f",&d,&e,&f);
    x=(c*e-b*f)/(e*a-b*d);
    y=(d*c-a*f)/(b*d-a*e);
    printf("value of x = %f and y = %f.",x,y);
    return 0;
}
