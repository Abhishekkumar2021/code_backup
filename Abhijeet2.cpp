// #include<iostream>
// #include<string>
// using namespace std;

// class student{
//     public:
//       int age;
//       string name;
// };

// int main(){
//     student stu;
//     stu.age=20;
//     cout<<stu.age<<endl;
// //   string name;
// //   getline(cin,name);
// //   cout<<name<<"\n";
// //   cout<<name.size()<<endl;
// //   name = name + "Jeet";
// //   cout << name << "\n";
// //   name = "Abhishek";
// //   cout << name << "\n";
// }
#include <iostream>
using namespace std;

int main(){
  string str;
  getline(cin, str);
  int i=0;
  while(str[i]!='\n'){
      cout<<str[i];
      i++;
  }
  return 0;
}
