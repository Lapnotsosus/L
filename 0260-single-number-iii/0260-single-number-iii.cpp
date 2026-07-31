class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>map;
        vector<int>ans;
        for(int x : nums)
        map[x]++;

        for (auto x : map)
        {
            if (x.second == 1)
            ans.push_back(x.first);
        }
        return ans;
    }
};