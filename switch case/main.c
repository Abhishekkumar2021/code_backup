#include <stdio.h>
#include <stdlib.h>

int month(int x,char a,char b,char c,int y){
    if(a=='J',b=='a',c=='n')
        return 1;
    else if(a=='F',b=='e',c=='b')
        return 2;
    else if(a=='M',b=='a',c=='r')
        return 3;
    else if(a=='A',b=='p',c=='r')
        return 4;
    else if(a=='M',b=='a',c=='y')
        return 5;
    else if(a=='J',b=='u',c=='n')
        return 6;
    else if(a=='J',b=='u',c=='l')
        return 7;
    else if(a=='A',b=='u',c=='g')
        return 8;
    else if(a=='S',b=='e',c=='p')
        return 9;
    else if(a=='O',b=='c',c=='t')
        return 10;
    else if(a=='N',b=='o',c=='v')
        return 11;
    else if(a=='D',b=='e',c=='c')
        return 12;
}
int day(char a,char b, char c){
    if(a=='M',b=='o',c=='n')
        return 1;
    else if(a=='T',b=='u',c=='e')
        return 2;
    else if(a=='W',b=='e',c=='d')
        return 3;
    else if(a=='T',b=='h',c=='u')
        return 4;
    else if(a=='F',b=='r',c=='i')
        return 5;
    else if(a=='S',b=='a',c=='t')
        return 6;
    else if(a=='s',b=='u',c=='n')
        return 7;
}
int main(){
    int jan=0,feb=0,mar=0,apr=0,may=0,jun=0,jul=0,aug=0,sep=0,oct=0,nov=0,dec=0,sun=0,mon=0,tue=0,wed=0,thu=0,fri=0,sat=0;
    while(2){
    char a,b,c,m,n,p;
    int x,y;
    scanf("%c%c%c",&a,&b,&c);
    scanf("%d",&x );
    scanf("%c%c%c",&m,&n,&p);
    scanf("%d",&y );
    if( x==0 && y==0)
        break;
    int t=month(x,m,n,p,y);
    switch(t){
        case 1 : jan++;
                 break;
        case 2 : feb++;
                 break;
        case 3 : mar++;
                 break;
        case 4 : apr++;
                 break;
        case 5 : may++;
                 break;
        case 6 : jun++;
                 break;
        case 7 : jul++;
                 break;
        case 8 : aug++;
                 break;
        case 9 : sep++;
                 break;
        case 10 : oct++;
                 break;
        case 11 : nov++;
                 break;
        case 12 : dec++;
                 break;
       }
    int w=day(a,b,c);
    switch(w){
        case 1 : mon++;
                 break;
        case 2 : tue++;
                 break;
        case 3 : wed++;
                 break;
        case 4 : thu++;
                 break;
        case 5 : fri++;
                 break;
        case 6 : sat++;
                 break;
        case 7 : sun++;
                 break;
       }

    }
    printf("Number of Sundays: %d\n", sun);
    printf("Number of Mondays: %d\n", mon);
    printf("Number of Tuesdays: %d\n", tue);
    printf("Number of Wednesdays: %d\n", wed);
    printf("Number of Thursdays: %d\n", thu);
    printf("Number of Fridays: %d\n", fri);
    printf("Number of Saturdays: %d\n", sat);
    printf("Number of Jan's: %d\n", jan);
    printf("Number of Feb's: %d\n", feb);
    printf("Number of Mar's: %d\n", mar);
    printf("Number of Apr's: %d\n", apr);
    printf("Number of May's: %d\n", may);
    printf("Number of Jun's: %d\n", jun);
    printf("Number of Jul's: %d\n", jul);
    printf("Number of Aug's: %d\n", aug);
    printf("Number of Sep's: %d\n", sep);
    printf("Number of Oct's: %d\n", oct);
    printf("Number of Nov's: %d\n", nov);
    printf("Number of Dec's: %d\n", dec);
   return 0;
}
