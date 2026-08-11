class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];

        for (int i=1 ; i<nums.size() ; i++)
        {
            if (nums[i] == nums[i-1]+1)
            {
                sum+=nums[i];
            }
            else
            break;
        }
        unordered_map<int,int>map;
        for (int x : nums)
        map[x]++;

        while(true)
        {
            if (map[sum]==0) return sum;
            else sum++;
        }
        return 0;
    }
};