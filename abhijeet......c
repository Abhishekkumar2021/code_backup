#include<stdio.h>

struct student{
    int age;
    char name[30];
    int rollno;
    float weight;
    float height;
};

int main(){
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    struct student stu1;
    struct student stu2;
    stu1.age = 20;
    printf("%d\n", stu1.age);
    printf("%d\n", stu2.age);

}