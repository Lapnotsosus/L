class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minindex = 0;
        int maxindex = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nums[maxindex])
                maxindex = i;

            if (nums[i] < nums[minindex])
                minindex = i;
        }

        int closer = min(minindex, maxindex);
        int farther = max(minindex, maxindex);

        int fromleft = farther + 1;
        int fromright = nums.size() - closer;
        int bothside = closer +1  + nums.size() - farther;

        return min({fromleft, fromright, bothside});
    }
};