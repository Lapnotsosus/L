class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int left=0;
        int ans=0;
        unordered_map<int,int>map;
        for (int right=0 ; right < nums.size() ; right ++)
        {
            map[nums[right]]++;

            while (map.size() > 2)
            {
                map[nums[left]]--;
                if (map[nums[left]] == 0)
                map.erase(nums[left]);
                left++;
            }
            ans = max (ans,right-left+1);
        }
        return ans;
    }
};