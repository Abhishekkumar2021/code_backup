#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int size = 10;
    int arr[10];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int maxSum = 0;
    // for(int i=0; i<size; i++){
    // 	for(int j=i; j<size; j++){
    // 		int sum = 0;
    // 		for(int k=i; k<=j; k++){
    // 			sum +=arr[k];
    // 		}
    // 		maxSum = max(sum,maxSum);

    // 	}
    // }
    // cout<<maxSum<<endl;
    // The time complexity of the above algorithm is O(N^3)
    // for(int i=0; i<size; i++){
    // 	int sum = 0;
    // 	for(int j=i; j<size; j++){
    // 		sum +=arr[j];
    // 		maxSum = max(sum,maxSum);
    // 	}
    // }
    //  cout<<maxSum<<endl;
    // The time complexity of this algorithm is O(N^2) which is better than the previous one.
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = max(arr[i], arr[i] + sum);
        maxSum = max(maxSum, sum);
    }
    cout << maxSum << endl;

    // This algorithm have a complexity of O(N)
}