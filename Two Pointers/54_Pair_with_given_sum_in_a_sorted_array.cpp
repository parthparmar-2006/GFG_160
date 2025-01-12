#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int l=0, r=arr.size()-1, cnt=0;
        while (l<r) {
            int sum = arr[l]+arr[r];
            if (sum<target) l++;
            if (sum>target) r--;
            if (sum==target) {
                int e1=arr[l], e2=arr[r], c1=0, c2=0;
                while (l<=r && arr[l]==e1) {
                    c1++;
                    l++;
                }
                while (l<=r && arr[r]==e2) {
                    c2++;
                    r--;
                }
                cnt += (e1==e2)? (c1*(c1-1)/2): c1*c2;
            }
        } return cnt;
    }
};