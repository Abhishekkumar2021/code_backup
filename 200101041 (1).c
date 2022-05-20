#include<stdio.h>

int corecourse(int x);
int SAcourse(int x,int y,int z,int w);
int theorycourse(int x,int y,int z,int w);
int labcourse(int x,int y,int z,int w);
int electivecourse(int x);

int main(){
    int coursenumber, lecture, tutorial, practical, credit, lectot=0, tuttot=0,practot=0,credtot=0, labc=0,theoryc=0,electivec=0,corec=0,sac=0;
    
    while(2>1){
        printf("Enter the course no. :");

        scanf("%d" , &coursenumber);

        printf("Enter the no. of lecture hours :");

        scanf("%d" , &lecture);

        printf("Enter the no. of tutorial hours :");

        scanf("%d" , &tutorial);

        printf("Enter the no. of practical hours :");

        scanf("%d" , &practical);

        printf("Enter the no. of credit :");

        scanf("%d" , &credit);

        if(coursenumber == 0 && lecture == 0 && tutorial == 0 && practical == 0 && credit == 0){/*do nothing*/}
        else{
        tuttot = tuttot + tutorial;
        lectot = lectot + lecture;
        credtot += credit;
        if(lecture >= 0 && tutorial>=0 && practical>=0 && credit ==0 ){/*do nothing*/}
        else {practot = practot + practical;}
        electivec = electivec + electivecourse(coursenumber);
        corec = corec + corecourse(coursenumber);
        labc = labc + labcourse(lecture,tutorial,practical,credit);
        theoryc = theoryc + theorycourse(lecture,tutorial,practical,credit);
        sac = sac +  SAcourse(lecture,tutorial,practical,credit);
        if(coursenumber == 0 && lecture == 0 && tutorial == 0 && practical == 0 && credit == 0)
        {break;}
    }
    printf("Total number of lecture hours credited: %d\n" , lectot);
    printf("Total number of tutorial hours credited: %d\n" , tuttot);
    printf("Total number of practical hours credited: %d\n" , practot);
    printf("Total number of credits registered: %d\n" , credtot);
    printf("Total number of lab courses registered: %d\n" , labc);
    printf("Total number of theory courses registered: %d\n" , theoryc);
    printf("Total number of elective courses registered: %d\n" , electivec);
    printf("Total number of core courses registered: %d\n" , corec);
    printf("Total number of SA courses registered: %d\n" , sac);
    
    return 0;
}

int labcourse(int x,int y,int z,int w){
    int a;
    if(x == 0 && y>=0 && z>0 && w>0){a = 1;}
    else{a = 0;}
    return a;
}

int theorycourse(int x,int y,int z,int w){
    int a;
    if(x > 0 && y>=0 && z>=0 && w>0){a = 1;}
    else{a=0;}
    return a;
}
int electivecourse(int x){
    int a;
    if(x > 400){a = 1;}
    else{a=0;}
    return a;
}
int SAcourse(int x,int y,int z,int w){
    int a;
    if(x >= 0 && y>=0 && z>=0 && w == 0){a = 1;}
    else{a=0;}
    return a;
}
int corecourse(int x){
    int a;
    if(x <= 400){a = 1;}
    else{a=0;}
    return a;
}
