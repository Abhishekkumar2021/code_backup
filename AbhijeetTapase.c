#include <stdio.h>
#include <stdlib.h>

struct batsman{
  char bat_name[100],ch,bowler[100];
  int runs,balls;
};
int run(char ch[10]){
  if(ch[0]==F)
  return 4;
  if(ch[0]==S)
  return 6;
  if(ch[0]==n)
  return 0;
  if(ch[0]=='1')
  return 1;
  if(ch[0]=='2')
  return 2;
  if(ch[0]=='3')
  return 3;
}
int main(){
  #ifndef ONLINE_JUDGE
   freopen("week15-ML3-input.txt", "r", stdin);
   freopen("week15-ML3-output.txt", "w", stdout);
  #endif
  int n;
  scanf("%d\n",&n);
  struct batsman commentary[n][1024];
  for(int i=0;i<n;i++){
    for(int j=0;j<1024;j++){
      float ball;
      scanf("%f",&ball);
      ball*=10;
      ball=((ball/10)*6)+ball%10;
     commentary[i][j].balls=ball;
     scanf("%[^ to]%*c",commentary[i][j].bowler);
     scanf("to %[^,]%*c",commentary[i][j].bat_name);
     char dht[10];
     scanf(", %[^,]%*c",dht);
     commentary[]
    }
  }
  return 0;
}