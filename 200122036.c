#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int sn;
    int rn;
    char* name;
    char* cid;
    char* cname;
              }S;
 int main()
 {
    int n,i,count=0,j,k,flag=0,p;
    scanf("%d",&n);
    char c[n][6];

    S record[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d", &record[i].sn, &record[i].rn);
        record[i].name=(char*)malloc(sizeof(char)*(100));
        scanf("%[^,]%*c", record[i].name);
        record[i].cid=(char*)malloc(sizeof(char)*(6));
        scanf("%[^,]%*c", record[i].cid);
        record[i].cname=(char*)malloc(sizeof(char)*(100));
        scanf("%[^\n]%*c", record[i].cname);
    }

    //printf("Distinct HSS Electives\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(!(strcmp(record[i].cid,record[j].cid)))
           {
            flag=1;
            break;
           }
        }

           if(flag==0)
           {
            //printf("%s\n", record[i].cid);
            strcpy(c[count],record[i].cid);
            count++;
           }
           flag=0;
    }

   int ch[count][12];
   for(i=0;i<count;i++)
   {
       for(j=0;j<12;j++)
       {
           ch[i][j]=1;
       }
   }
   p=count;
   count=0;
    for(i=0;i<p;i++)
    {
       for(j=0;j<n;j++)
       {
            if(!(strcmp(c[i],record[j].cid)))
            {
              k= (((record[j].rn)%100000)/1000);
              ch[i][0]=0;
               if(k==1)
                {ch[i][1]=0;
                continue;}
               if(k==2)
                {ch[i][2]=0;
                continue;}
               if(k==3)
                {ch[i][3]=0;
                continue;}
               if(k==4)
                {ch[i][4]=0;
                continue;}
               if(k==5)
                {ch[i][5]=0;
                continue;}
               if(k==6)
                {ch[i][6]=0;
                continue;}
               if(k==7)
                {ch[i][7]=0;
                continue;}
               if(k==8)
                {ch[i][8]=0;
                continue;}
               if(k==21)
                {ch[i][9]=0;
                continue;}
               if(k==22)
                {ch[i][10]=0;
                continue;}
               if(k==23)
                {ch[i][11]=0;
                continue;}

            }
       }
    }

    for(i=0;i<p;i++)
    {
        flag=0;
        printf("%s: ",c[i]);
       for(j=1;j<12;j++)
       {

           if(ch[i][j] == 1)
           {
               flag=1;
               if(j==1)
                {printf("%s","CSE, ");
                continue;}
               if(j==2)
                {printf("%s","ECE, ");
                continue;}
               if(j==3)
                {printf("%s","ME, ");
                continue;}
               if(j==4)
                {printf("%s","CE, ");
                continue;}
               if(j==5)
                {printf("%s","DD, ");
                continue;}
               if(j==6)
                {printf("%s","BSBE, ");
                continue;}
               if(j==7)
                {printf("%s","CL, ");
                continue;}
               if(j==8)
                {printf("%s","EEE, ");
                continue;}
               if(j==9)
                {printf("%s","CST, ");
                continue;}
               if(j==10)
                {printf("%s","EP, ");
                continue;}
               if(j==11)
                {printf("%s","MnC, ");
                continue;}

           }

       }
       if(flag==0)
        {printf("None");}
       printf("\n");
    }

    for(i=0;i<p;i++)
   {
       for(j=0;j<12;j++)
       {
           printf("%d ",ch[i][j]);
       }
       printf("\n");
   }

    for(i=0;i<n;i++)
    {
        free(record[i].name);
        free(record[i].cid);
        free(record[i].cname);
    }
    return 0;
 }




