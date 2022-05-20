#include<iostream>
#include<map>
#include<vector>
using namespace std;
vector<long long> twoSum(vector<long long>& nums, int target) {
      map<long long, long long> map;
      vector<long long> pairs;
      for(int i = 0; i < nums.size(); i++) {
          long long complement = target - nums[i];
          if(map.find(complement) != map.end()) {
              pairs.push_back(map.find(complement)->second);
              pairs.push_back(i);
              break;
          }
          map.insert(pair<long long , long long>(nums[i], i));
      }
      return pairs;
};
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	vector<long long> v;
	long long  x;
	while(cin>>x){
		v.push_back(x);
	}


	for(int t=-10000; t<=10000; t++){
		cout<<"Ans for target = "<<t<<" : ";
		vector<long long> ans = twoSum(v, t);
		for(int i=0; i<ans.size(); i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}

}