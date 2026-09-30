class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for (int i=0 ; i<nums.size(); i++)
        {
            int x = abs(nums[i]);
            int index = x-1;

            if (nums[index]<0)
            ans.push_back(x);

            nums[index] = 0-nums[index];
        }
        return ans;
    }
};