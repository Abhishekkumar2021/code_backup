#include <iostream>

using namespace std;
int main()
{int  marks[10];

for(int i=0; i<10; i++)
{
    cin>>marks[i];

}
 int sum=0;
 for(int i=0; i<10; i++)
    {
        sum=sum+marks[i];

    }
    cout<<"sum = ";
    cout<<sum;
    int evenindex=0 ;
 for(int i=0; i<10; i=i+2)
 {
     evenindex+=marks[i];
 }
 cout<<"\neven index = ";
 cout<<evenindex;

    return 0 ;
}


