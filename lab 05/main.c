#include <stdio.h>
#include <stdlib.h>
float power(float a, int b)
{
    float res=1;
    for (int k=0; k<b; k++)
        res*=a;
    return res;
}

float ln(float x)
{
    float sum=0;
    int i=1;
    while(1)
    {
        sum+=power(-1,i+1)*power(x,i)/i;
        i++;
    }
    return sum;
}

int main()
{
    float x;
    for(int m=0; m<100; m++)
    {
        x=-1*0.99+m/100.00;
        printf("x = %f        %.5f \n",x,ln(x));
    }
    return 0;
}
