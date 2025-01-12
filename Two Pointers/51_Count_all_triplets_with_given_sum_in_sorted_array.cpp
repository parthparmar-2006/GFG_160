#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int n = arr.size(), ans=0;
        for (int i=0; i<n; i++) {
            int l=i+1, r=n-1;
            while (l<r) {
                int sum = arr[i]+arr[l]+arr[r];
                if (sum<target) l++;
                if (sum>target) r--;
                if (sum==target) {
                    int ele1=arr[l], ele2=arr[r], c1=0, c2=0;
                    while (l<=r && arr[l]==ele1) {
                        c1++;
                        l++;
                    }
                    while (l<=r && arr[r]==ele2) {
                        c2++;
                        r--;
                    }
                    if (ele1==ele2) {
                        ans += (c1*(c1-1)/2);
                    } else {
                        ans += (c1*c2);
                    }
                }
            }
        } return ans;
    }
};