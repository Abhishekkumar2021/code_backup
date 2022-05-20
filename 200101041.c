#include<stdio.h>

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
        if(coursenumber == 0 && lecture == 0 && tutorial == 0 && practical == 0 && credit == 0){}
        else{
        lectot = lectot + lecture;
        tuttot = tuttot + tutorial;
        practot = practot + practical;
        credtot += credit;
        if(coursenumber > 400){electivec = electivec + 1 ;}
        if(coursenumber <= 400 && coursenumber !=0){corec = corec + 1 ;}
        if(lecture == 0 && tutorial>=0 && practical>0 && credit>0){labc = labc + 1 ;}
        if(lecture > 0 && tutorial>=0 && practical>=0 && credit>0){theoryc = theoryc+1 ;}
        if(lecture >= 0 && tutorial>=0 && practical>=0 && credit ==0 ){sac = sac + 1 ; practot = practot - practical;}
        }
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
