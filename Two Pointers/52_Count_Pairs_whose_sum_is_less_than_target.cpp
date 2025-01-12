#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(), arr.end());
        int i=0, j=arr.size()-1, ans=0;
        while (i<j) {
            int sum = arr[i]+arr[j];
            if (sum<target) {
                ans+=(j-i);
                i++;
            }
            else j--;
        } return ans;
    }
};