#include<stdio.h>
int main()
{
    int i,n,m,t=0;
    char a[100];

    for(i=0;i<20;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]=='\n')
            break;
    }
    n=i;
    for(m=0;m<=n/2-1;m++)
    {
        if(a[m]==a[n-1-m])
            t=t+1;
    }
    if(t==n/2)
        printf("YES PALLINDROME");
    else
        printf("NOT A PALLINDROME");
    return  0;

}
