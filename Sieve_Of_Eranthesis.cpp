#include<bits/stdc++.h>
using namespace std;
vector<int>prime(1000001,1);

void prime_fun(){
    int t1=1000001;
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i*i<t1;i++){
        for(int j=i*i;j<t1;j+=i)if(prime[j]==1)prime[j]=0;
    }
}
int main(){
	int t;
	cin>>t;
	prime_fun();
	while(t--){
		int n;
		cin>>n;
		if(prime[n]==1)cout<<"PRIME"<<endl;
		else cout<<"NOT PRIME"<<endl;
	}
}
