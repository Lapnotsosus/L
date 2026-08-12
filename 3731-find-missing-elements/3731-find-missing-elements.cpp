class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort (nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for (int x : nums)
        mp[x]++;
        vector <int>ans;

        for (int i=nums[0] ; i<nums[nums.size()-1] ; i++)
        {
            if (mp[i] != 1)
            ans.push_back(i);
        }
        return ans;
    }
};