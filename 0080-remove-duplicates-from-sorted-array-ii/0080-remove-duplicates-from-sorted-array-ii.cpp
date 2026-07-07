class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size()<3)
        return nums.size();

        int last=nums.size()-1;
        int w = 2;

        for (int i=2; i <= last ; i++)
        {
            if (nums[i]!=nums[w-2])
            {
                nums[w] = nums[i];
                w++;
            }
        }
        return w;
    }
};