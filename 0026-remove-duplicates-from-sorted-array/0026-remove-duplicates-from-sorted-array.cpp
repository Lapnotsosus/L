class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int w=0;
        for (int r=1; r<nums.size(); r++)
        {
            if(nums[w]!=nums[r])
            {
                nums[w+1]=nums[r];
                w++;
            }
        }
        return w+1;
    }
};