#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string str;
    getline(cin,str);
    string temp = str;
    cout<<"................USING XOR OPERATION...................\n";
     for(int num=0; num<256; num++){
        temp = str;
         for(int i=0; i<str.size(); i++){
            temp[i] = (temp[i]^num);
         }
         cout<<"Encrypted with num = "<<num<<"   :   ";
         cout<<temp<<endl;
         //  for(int i=0; i<str.size(); i++){
         //    temp[i] = (temp[i]^num); 
         // }
         // cout<<"Decrypted with num = "<<num<<"   :   ";
         // cout<<temp<<endl;
    }
    // //if we do XOR operation even times then its value doesn't change.
   

    // cout<<"................USING OR OPERATION...................\n";
    //  for(int num=0; num<256; num++){
    //     temp = str;
    //      for(int i=0; i<str.size(); i++){
    //         temp[i] = (temp[i]|num);
    //      }
    //      cout<<"Encrypted with num = "<<num<<"   :   ";
    //      cout<<temp<<endl;
    //       for(int i=0; i<str.size(); i++){
    //         temp[i] = (temp[i]|num);
    //      }
    //      cout<<"Decrypted with num = "<<num<<"   :   ";
    //      cout<<temp<<endl;
    // }

    //  cout<<"................USING AND OPERATION...................\n";
    //  for(int num=0; num<256; num++){
    //     temp = str;
    //      for(int i=0; i<str.size(); i++){
    //         temp[i] = (temp[i]&num);
    //      }
    //      cout<<"Encrypted with num = "<<num<<"   :   ";
    //      cout<<temp<<endl;
    //       for(int i=0; i<str.size(); i++){
    //         temp[i] = (temp[i]&num);
    //      }
    //      cout<<"Decrypted with num = "<<num<<"   :   ";
    //      cout<<temp<<endl;
    // }
   

}