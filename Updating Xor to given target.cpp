#include <bits/stdc++.h>
using namespace std;

int funn(vector<int>& nums, int k) {
    int c=0,c1=0;
    for (int i=0;i<nums.size();i++){
        c^=nums[i];
    }
    for (int i=31;i>=0;i--){
        if(((c>>i)&1)!=((k>>i)&1))c1++;
    }
    //cout<<c1;
    return c1;
}

int main() {
	int n,target;
	vector<int>nums;
	cout<<"Enter Array_length:";
	cin>>n;
	cout<<"\nEnter Array_elements:";
	for (int i=0;i<n;i++){
	    int n1;
	    cin>>n1;
	    nums.push_back(n1);
	}
	cout<<"\nEnter Target_XOR:";
	cin>>target;
	cout<<"\n Minimum Operations to be made to get target Xor is :"<<" "<<funn(nums,target);
	return 0;
}
