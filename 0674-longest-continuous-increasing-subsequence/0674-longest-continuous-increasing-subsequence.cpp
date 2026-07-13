class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1;
        int maxcount=1;
        for (int i=0; i< nums.size()-1 ; i++)
        {
            if(nums[i] < nums[i+1])
            {
                count++;
                maxcount = max (count , maxcount);
            }
            else
            {
                count =1;
            }
        }
        return maxcount;
    }
};