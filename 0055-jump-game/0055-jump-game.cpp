class Solution {
public:
    bool canJump(vector<int>& nums) {
        int end=nums.size()-1;
        int maxreach=0;

        for (int i=0 ; i< nums.size() ; i++)
        {
            if(i>maxreach) return false;
            maxreach = max(maxreach,nums[i]+i);
            if (maxreach>=end) return true;
        }
        return false;
    }
};