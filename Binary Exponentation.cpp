#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll num,pow,res=1;
    cin>>num>>pow;
    while(pow){
        if(pow&1){
            pow-=1;
            res*=num;
        }
        else{
            pow/=2;
            num*=num;
        }
    }
    cout<<res;
}
