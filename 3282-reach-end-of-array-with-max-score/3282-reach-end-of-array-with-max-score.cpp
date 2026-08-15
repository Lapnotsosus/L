class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int ans=0;
        long long niggee=0;
        for (int i = 0 ; i < nums.size()-1 ; i++)
        {
            ans = max(ans,nums[i]);
            niggee+=ans;
        }
        return niggee;
    }
};