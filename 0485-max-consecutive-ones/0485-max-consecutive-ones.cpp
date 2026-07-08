class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,mc=0;
        for (int x : nums)
        {
            if (x==1)
            {
                c++;
                mc=max(mc,c);
            }
            else
            c=0;
        }
        return mc;
    }
};