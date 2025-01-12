#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size(), cnt=0;
        for (int i=2; i<n; i++) {
            int l=0, r=i-1;
            while (l<r) {
                int sum = arr[l]+arr[r];
                if (sum>arr[i]) {
                    cnt+=(r-l);
                    r--;
                } else l++;
            }
        } return cnt;
    }
};