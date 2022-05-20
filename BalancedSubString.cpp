#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n; 
        cin>>n;
        cin.ignore();
        string s;
        getline(cin, s);
        int count = -1;
        int a = s.size();
        for (int i = 0; i < a; i++)
        {
            int count = 0;
            int j;
            for (j = i; j < a; j++)
            {
                if (s[j] == 'a')
                    count++;
                if (s[j] == 'b')
                    count--;
                if (count == 0)
                    break;
            }

            if (count == 0)
                cout << i + 1 << " " << j + 1 << endl;
            else
                cout << -1 << " " << -1 << endl;
        }
        cout<<"\n..................................................\n";
    }
    
    return 0;
}