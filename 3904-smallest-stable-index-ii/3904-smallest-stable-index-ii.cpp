class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>suffixmin(nums.size());
        int mn=INT_MAX;
        suffixmin[nums.size()-1] = nums[nums.size()-1];
        for (int i=nums.size()-2 ; i>=0 ; i--)
        {
            suffixmin[i] = min(suffixmin[i+1],nums[i]);
        }
        vector<int>prefixsum(nums.size());
        prefixsum[0] = nums[0];
        for (int i=0 ; i<nums.size() ; i++)
        {   
            if (i>0)
            prefixsum[i] = max(prefixsum[i-1],nums[i]);

            if(prefixsum[i] - suffixmin[i] <= k)
            return i;
        }
        return -1;
    }
};