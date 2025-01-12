#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> st;
        vector<int> res;
        for (int i: a) st.insert(i);
        for (int i: b) {
            if (st.find(i)!=st.end()) {
                res.push_back(i);
                st.erase(i);
            }
        } return res;
    }
};