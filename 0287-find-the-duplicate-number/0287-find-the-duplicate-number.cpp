class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
        for (int x : nums)
        {
            map[x]++;
            if (map[x]==2)
            return x;
        }
        return 0;
        
    }
};