#include <stdio.h>
#include <stdlib.h>
int no_of_dig(int x)
{   int cnt=0;
    while (x>0)
    {
        cnt++;
        x/=10;
    }
    return cnt;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(no_of_dig(a+b)==no_of_dig(b))
          printf("%d\n",b);
        else
           printf("%d\n",a+b);
    }
    return 0;
}
