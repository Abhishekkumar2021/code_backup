#include <iostream>
using namespace std;
int main()
{
     int roll_no,dept_code;
   cout<<"Enter your roll number : ";
   cin>>roll_no;
   cout<<endl;
   roll_no=roll_no/1000;
   dept_code=roll_no%100;
  cout<<"Your Department is : ";
   if(dept_code==1)
    cout<<"CSE";
   else if(dept_code == 2)
    cout<<"ECE";
   else if(dept_code == 3)
    cout<<"ME";
    else if(dept_code ==4)
        cout<<"CE";
    else if(dept_code == 5)
        cout<<"DD";
    else if(dept_code == 6)
        cout<<"BSBE";
    else if(dept_code == 7)
        cout<<"CL";
    else if(dept_code == 8)
        cout<<"EEE";
    else if(dept_code == 21)
        cout<<"EPH";
    else if(dept_code == 22)
        cout<<"CST";
    else
        cout<<"M&C";
        cout<<endl;
    return 0;
}
