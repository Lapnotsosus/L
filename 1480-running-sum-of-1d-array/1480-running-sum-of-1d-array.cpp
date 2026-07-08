class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        int i=0;

        for (auto x : nums)
        {
            sum+=x;
            nums[i]=sum;
            i++;
        }
        return nums;
    }
};