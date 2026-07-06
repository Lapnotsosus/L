class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
        return 0;

        int w=0;
        for (int r=1; r<nums.size(); r++)
        {
            if (nums[r]!=nums[w])
            {
                w++;
                nums[w]=nums[r];
            }
        }
        return w+1;
    }
};