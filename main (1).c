#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,j;
    for( a=1;a<=5;a++)
    {
      for(j=a;j>0;j--)
      {
          printf("# ");
      }
        printf("\n");
    }
    return 0;
}
