class Solution {
public:
    int maxArea(vector<int>& nums) {
        if(nums.size()<2) return 0;

        int l=0;
        int r=nums.size()-1;
        int ans=0;

        while (l<r)
        {
            int curr = min(nums[l],nums[r]);
            int vol = curr*abs(r-l);
            ans = max(ans,vol);
            if (nums[l]<nums[r]) l++;
            else r--;
        }

        return ans;
    }
};