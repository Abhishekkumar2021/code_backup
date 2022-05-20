#include <stdio.h>
#include <stdlib.h>
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t = 10;
  while(t--){
    int sum=0,prod =1;
    int x;
    scanf("%d",&x);
    int temp = x;
    while(temp>0){
      int d = temp%10;
      temp/=10;
      sum+=d;
      prod*=d;
    }
    printf("the sum of digits of %d is %d and the product is %d\n",x,sum,prod);
  }
    return 0;
}
