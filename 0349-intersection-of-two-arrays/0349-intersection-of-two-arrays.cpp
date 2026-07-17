class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        set<int> ans;

        for (int x : nums1)
        s.insert(x);

        for (int x : nums2)
        {
            if (s.count(x) == 1) ans.insert(x);
        }
        vector<int>v(ans.begin(),ans.end());
        return v;
    }
};