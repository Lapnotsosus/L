class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int w=0;
        int n = nums.size();
        for (int i=0 ; i< nums.size() ; i++)
        {
            if (nums[i]!=val)
            {
                nums[w]=nums[i];
                w++;
            }
        }
        return w;
    }
};