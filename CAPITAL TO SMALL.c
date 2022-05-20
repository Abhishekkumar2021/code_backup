#include<stdio.h>
#include<string.h>
int main()
{
    int x,y;
    char ch,b;


     ch = getchar();

     while(ch!='$')
     {
        x=ch;
        if(x>64 && x<91)
        {
            y=x+32;
        }
        else
            y=x;

        b=y;
        printf("%c",b);
        ch = getchar();

       }


            return 0;

}
