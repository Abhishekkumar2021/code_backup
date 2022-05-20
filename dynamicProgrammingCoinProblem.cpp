#include<bits/stdc++.h>
using namespace std;
int solve(int x){
    int coins[] = { 1, 3, 4};
    if (x < 0)
        return -1;
    if (x == 0)
        return 0;
    int best = -1;
    for (auto c : coins)
    {
        best = min(best, solve(x - c) + 1);
    }
    return best;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout<<solve(10)<<endl;
  return 0;
}