#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> st;
        for (int i: a) st.insert(i);
        for (int i: b) st.insert(i);
        return st.size();
    }
};