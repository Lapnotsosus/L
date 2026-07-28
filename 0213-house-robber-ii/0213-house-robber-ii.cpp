class Solution {
public:
    int cirkljrk (vector<int>&nums , int start , int end)
    {
        int p1=0,p2=0;
        for (int i=start ; i <= end ; i++)
        {
            int curr = max(p1,p2+nums[i]);
            p2=p1;
            p1=curr;
        }
        return p1;
    }


    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        else if (nums.size()==2) return max(nums[0],nums[1]);
        

        return max(cirkljrk(nums, 0 ,nums.size()-2) , cirkljrk(nums,1,nums.size()-1));
    }
};