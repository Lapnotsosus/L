class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_set<int>s;
       sort(nums.begin(),nums.end());
       for (int x : nums)
       s.insert(x);
       int maxnum = nums[nums.size()-1];
       int ans=-1;
       for (int i=1 ; i<maxnum ; i++)
       if (s.count(i) == 0){ ans = i;
       break;}

       if (maxnum <= 0) return 1;
       else if(ans == -1) return maxnum+1;
       else return ans;
    }
};