class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int s=0;
        sort (nums.begin() , nums.end());
        for (int i = 0; i<nums.size() ; i++)
        {
            s+= min(nums[i],nums[++i]);
        }
        return s;
    }
};