
#include<stdio.h>
int cal_dep_code(int);
int cal_pro_code(int);
main()
{int roll_no,dep_code,pro_code;
int cse=0,ece=0,me=0,ce=0,dd=0,bsbe=0,cl=0,eee=0,eph=0,cst=0,m_c=0;
int b_tech=0,b_des=0,m_tech=0,phd=0;
while(1)
{
    scanf("%d",&roll_no);
    if(roll_no==0) break;
    dep_code=cal_dep_code(roll_no);
    pro_code=cal_pro_code(roll_no);
    switch(dep_code)
    {
        case 1 : cse++; break;
        case 2 : ece++; break;
        case 3 : me++;  break;
        case 4 : ce++;  break;
        case 5 : dd++;  break;
        case 6 : bsbe++;break;
        case 7 : cl++;  break;
        case 8 : eee++; break;
        case 21 : eph++; break;
        case 22 : cst++; break;
        case 23 : m_c++; break;

    }
    switch(pro_code)
   {
       case 01 : b_tech++; break;
       case 02 : b_des++;  break;
       case 41 : m_tech++; break;
       case 61 : phd++;    break;
   }
}
   printf("Number of students from CSE: %d\n",cse);
   printf("Number of students from ECE: %d\n",ece);
   printf("Number of students from ME: %d\n",me);
   printf("Number of students from CE: %d\n",ce);
   printf("Number of students from DD: %d\n",dd);
   printf("Number of students from BSBE: %d\n",bsbe);
   printf("Number of students from CL: %d\n",cl);
   printf("Number of students from EEE: %d\n",eee);
   printf("Number of students from EPH: %d\n",eph);
   printf("Number of students from CST: %d\n",cst);
   printf("Number of students from M&C: %d\n",m_c);
   printf("Number of students from BTech: %d\n",b_tech);
   printf("Number of students from BDes: %d\n",b_des);
   printf("Number of students from MTech: %d\n",m_tech);
   printf("Number of students from PhD: %d\n",phd);
}
    int cal_dep_code(int a)
    {
        int x,y,z;
        a=a/1000;
        x=a%10;
        a=a/10;
        y=a%10;
        z=y*10+x;
        return z;
    }
    int cal_pro_code(int a)
    {
        int p,q,r;
        a=a/100000;
        p=a%10;
        a=a/10;
        q=a%10;
        r=q*10+p;
        return r;
    }
