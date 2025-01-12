#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        unordered_map<int, vector<pair<int, int>>> mp;
        for (int i=0; i<arr.size(); i++) {
            for (int j=i+1; j<arr.size(); j++) {
                mp[arr[i]+arr[j]].push_back({i, j});
            }
        }
        set<vector<int>> st;
        for (int i=0; i<arr.size(); i++) {
            if (mp.find(0-arr[i])!=mp.end()) {
                for (auto j: mp[0-arr[i]]) {
                    if (i!=j.first && i!=j.second) {
                        vector<int> temp(3);
                        temp[0] = i;
                        temp[1] = j.first;
                        temp[2] = j.second;
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        } 
        vector<vector<int>> res;
        for (auto i: st) {
            res.push_back(i);
        }
        return res;
    }
};