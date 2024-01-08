#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int cuts(vector<int>& arr, int tar) {
        int c = arr[0];
        int cutss = 1;
        for (int i = 1; i < arr.size(); ++i) {
            if (c + arr[i] <= tar) {
                c += arr[i];
            } else {
                cutss++;
                c = arr[i];
            }
        }
        return cutss;
    }

    int splitArray(vector<int>& arr, int N, int K) {
        int sum = accumulate(arr.begin(), arr.end(), 0);
        int l = sum / K;
        int h = accumulate(arr.begin(), arr.end(), 0);
        int maxx = *max_element(arr.begin(), arr.end());
        int result = 0;

        while (l <= h) {
            int m = (l + h) / 2;
            if (cuts(arr, m) > K) {
                l = m + 1;
            } else {
                h = m - 1;
                result = max(maxx, l);
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> arr;
    int N,K;
    cin>>N;
    for (int i=0;i<N;i++){
      int N1;
      cin>>N1;
      arr.push_back(N1);
    }
    cin>>K;
    int ans = s.splitArray(arr, N, K);
    cout << "The minimum possible maximum sum among subarrays: " << ans << endl;
    return 0;
}
