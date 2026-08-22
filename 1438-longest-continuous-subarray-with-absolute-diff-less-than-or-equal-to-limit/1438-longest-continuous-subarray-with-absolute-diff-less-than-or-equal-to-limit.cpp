class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>ms;
        int ans=0;
        int left=0; 
        for (int right=0; right<nums.size() ; right++)
        {
            ms.insert(nums[right]);

            while (*ms.rbegin() - *ms.begin() > limit)
            {
                ms.erase(ms.find(nums[left]));
                left++;
            }
            ans = max (ans, right-left+1);
        }
        return ans;
    }
};