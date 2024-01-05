#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>vec,nums;
	for (int i=0;i<n;i++){
	    int n1;
	    cin>>n1;
	    nums.push_back(n1);
	}
	vec.push_back(nums[0]);
	for (int i=1;i<n;i++){
	    auto it=lower_bound(vec.begin(),vec.end(),nums[i]);
	    int id=it-vec.begin();
	    if(id>=vec.size())vec.push_back(nums[i]);
	    else vec[id]=nums[i];
	}
	cout<<vec.size();
	return 0;
}
