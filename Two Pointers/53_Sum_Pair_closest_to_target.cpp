#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        if (arr.size()<=1) return {};
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int closestDiff = INT_MAX;
        vector<int> ans(2, 0);
    
        int left = 0, right = n - 1;
    
        while (left < right) {
            int sum = arr[left] + arr[right];
            int diff = abs(target - sum);
    
            if (diff < closestDiff) {
                closestDiff = diff;
                ans[0] = arr[left];
                ans[1] = arr[right];
            }
    
            if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }
        return ans;
    }
};