#include<bits/stdc++.h>
using namespace std;

class student{
		int age;
		string name;
		float height;
		int rollNuber;
		char sectionName;
	public:
		//default constructor
		student(){
			age = 0;
			name="";
			height = 0;
			rollNuber = 0;
			sectionName = ' ';
			cout<<"Hey I am in the default constructor"<<endl;
		}

		//parametrised constructor
		student(int age, string name, float height, int rollNuber,char sectionName){
			this->age = age;
			this->name=name;
			this->height = height;
			this->rollNuber = rollNuber;
			this->sectionName = sectionName;
			cout<<"Hey I am in the parametrised constructor"<<endl;
		}
        string getName(){
			return name;
		}	
		void changeAge(int age){
			this->age = age;
		}	

		int getAge(){
			return age;
		}

};

int main(){
 //    int x = 20;  //statically allocated
	// while(true){
	//   // int *ptr = (int*)malloc(1*sizeof(int)); //dynamic memory--> allocated at run time
	//  //    free(ptr);
	// 	int *ptr = new int;
	// 	delete ptr;

	// }
	student s1;  //a variable of student data type is created
	student s2(19,"Abhishek",167,200101006,'A');
	// student *s3 = (sudent*)malloc(sizeof(student));
	student *s3 = new student(19,"Abhishek",167,200101006,'A');
	cout<<s3->getName()<<endl;
	cout<<s3->getAge()<<endl;
	s3->changeAge(20);
	cout<<s3->getAge()<<endl;
}
