#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int, bool> mp;
        for (int i=0; i<arr.size(); i++) {
            if (mp.find(target-arr[i])!=mp.end()) return true;
            mp[arr[i]] = true;
        } return false;
    }
};