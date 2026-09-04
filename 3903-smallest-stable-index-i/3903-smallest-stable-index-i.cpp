class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int score=INT_MAX;
        for (int i=0 ; i<nums.size() ; i++)
        {
            int max1=0;
            int min1=INT_MAX;
            for (int j=0 ; j<= i ; j++)
            {
                max1 = max(max1,nums[j]);
            }
            for (int j=i ; j<nums.size() ; j++)
            {
                min1 = min(min1,nums[j]);
            }
            if (max1-min1  <= k)
            score=min(score,i);
        }
        if (score == INT_MAX) return -1;
        else return score;
    }
};