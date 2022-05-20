#include <iostream>

using namespace std;

int main()
{
   int a[]={1,2,3,4,5};
   char b[]="abcde";
   cout<<a<<"\n";   //print address of first element of a[];
   cout<<b;     //doesn't print the address but prints string till it get the \0 character.
   //there is a lot of difference between an int pointer and a character pointer. i.e if we print the content of int pointer then it will show the address but if we print the content of a char pointer then it will print the
   //content of the string to which it is pointing. as above cout<<a; will print the address of a but cout<<b; will prints abcde on the screen.
   int *ptr=a;   //now ptr have address of first element of a[];
   //there is many difference between a pointer and the name of an array..
   /* 1. sizeof() function works differently for both of the pointers ....for ptr it will return 8 bytes but for array name pointer it returns the total size of the array on memory.
   2. no seperate memory is defined for array name pointer but there is a seperate memory is defined for the pointer...
   3. we cannot do assignment operation in case of array name pointer like a=a+1 or a++
   4. a and &a will return the sane address because there is no  seperate memory location is defined for array name pointer.*/
   cout<<endl<<ptr; //prints ptr i.e address of first element of a[];
   cout<<endl<<*ptr;  //prints first element of a[];
   char *ptr2=b;   //now ptr2 have address of b;
   cout<<endl<<ptr2;   //doesn't print the address but prints string till it get the \0 character.
   cout<<endl<<*ptr2;  //prints only first element.
    char ch='A';
    char *cptr=&ch; //cptr have address of ch;
    cout<<endl<<cptr;    //doesn't print the address but prints string till it get the \0 character.
    return 0;
}
