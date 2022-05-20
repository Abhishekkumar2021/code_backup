#include<stdio.h>

int month_no(int x, char a, char b, char c, int y)
{
    if(a=='J'&&b=='a'&&c=='n')
    return 1;
    if(a=='F'&&b=='e'&&c=='b')
    return 2;
    if(a=='M'&&b=='a'&&c=='r')
    return 3;
    if(a=='A'&&b=='p'&&c=='r')
    return 4;
    if(a=='M'&&b=='a'&&c=='y')
    return 5;
    if(a=='J'&&b=='u'&&c=='n')
    return 6;
    if(a=='J'&&b=='u'&&c=='l')
    return 7;
    if(a=='A'&&b=='u'&&c=='g')
    return 8;
    if(a=='S'&&b=='e'&&c=='p')
    return 9;
    if(a=='O'&&b=='c'&&c=='t')
    return 10;
    if(a=='N'&&b=='o'&&c=='v')
    return 11;
    if(a=='D'&&b=='e'&&c=='c')
    return 12;
}

int day_no(char a, char b, char c)
{
    if(a=='M'&&b=='o'&&c=='n')
    return 1;
    if(a=='T'&&b=='u'&&c=='e')
    return 2;
    if(a=='W'&&b=='e'&&c=='d')
    return 3;
    if(a=='T'&&b=='h'&&c=='u')
    return 4;
    if(a=='F'&&b=='r'&&c=='i')
    return 5;
    if(a=='S'&&b=='a'&&c=='t')
    return 6;
    if(a=='S'&&b=='u'&&c=='n')
    return 7;
}

int main()
{
    int d,y,i;
    char mm1,mm2,mm3,dd1,dd2,dd3;
    int m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,m7=0,m8=0,m9=0,m10=0,m11=0,m12=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0;
    while(dd1!='0'&&dd2!='0'&&dd3!='0'&&d!=0&&mm1!='0',mm2!='0',mm3!='0'&&y!=0)
    {
        scanf(" %c%c%c %d-%c%c%c-%d",&dd1,&dd2,&dd3,&d,&mm1,&mm2,&mm3,&y);
        switch(month_no(d,mm1,mm2,mm3,y))
        {
        case 1 : m1++;
        break;
        case 2 : m2++;
        break;
        case 3 : m3++;
        break;
        case 4 : m4++;
        break;
        case 5 : m5++;
        break;
        case 6 : m6++;
        break;
        case 7 : m7++;
        break;
        case 8 : m8++;
        break;
        case 9 : m9++;
        break;
        case 10 : m10++;
        break;
        case 11 : m11++;
        break;
        case 12 : m12++;
        break;
        }
        switch(day_no(dd1,dd2,dd3))
        {
        case 1 : d1++;
        break;
        case 2 : d2++;
        break;
        case 3 : d3++;
        break;
        case 4 : d4++;
        break;
        case 5 : d5++;
        break;
        case 6 : d6++;
        break;
        case 7 : d7++;
        break;
        }
    }
    printf("\nNumber of Mondays = %d",d1);
    printf("\nNumber of Tuesdays = %d",d2);
    printf("\nNumber of Wednesdays = %d",d3);
    printf("\nNumber of Thursdays = %d",d4);
    printf("\nNumber of Fridays = %d",d5);
    printf("\nNumber of Saturdays = %d",d6);
    printf("\nNumber of Sundays = %d",d7);
    printf("\n------------------------\n");
    printf("\nNumber of January's = %d",m1);
    printf("\nNumber of February's = %d",m2);
    printf("\nNumber of March's= %d",m3);
    printf("\nNumber of April's = %d",m4);
    printf("\nNumber of May's = %d",m5);
    printf("\nNumber of June's = %d",m6);
    printf("\nNumber of July's = %d",m7);
    printf("\nNumber of August's = %d",m8);
    printf("\nNumber of September's = %d",m9);
    printf("\nNumber of October's = %d",m10);
    printf("\nNumber of November's = %d",m11);
    printf("\nNumber of December's = %d",m12);
    return 0;
}
