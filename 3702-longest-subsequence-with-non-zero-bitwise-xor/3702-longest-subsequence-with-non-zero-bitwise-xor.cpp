class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=0;
        bool marker=false;

        for (int x : nums)
        {
            ans = ans ^x;
            if (x!=0) marker = true;
        }
        if (ans != 0)
        return nums.size();
        else if (marker == false)
        return 0;

        return nums.size()-1;
    }
};