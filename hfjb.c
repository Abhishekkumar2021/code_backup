#include<stdio.h>

main()
{
    int x,r,i,j,k;
    printf("enter number of elements");
    scanf("%d",&x);
    r= sqrt(x/3);
    int a[r][r][3];
    printf("enter elements");
    for(k=0;k<3;k++)
    {
        for(j=0;j<r;j++)
        {
            for (i=0;i<r;i++)
            {
                scanf("%4d",&a[i][j][k]);
            }
        }
    }
    for(k=0;k<3;k++)
    {
        for(j=0;j<r;j++)
        {
            for (i=0;i<r;i++)
            {
                printf("%4d",a[i][j][k]);

            }
            printf("\n");
        }
         printf("\n");

    }

}
