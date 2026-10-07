class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int most=0;
        int left = 0;
        unordered_map<char,int>mp;
        for (int right=0 ; right<s.size() ;right++)
        {
            mp[s[right]]++;
            most = max(most, mp[s[right]]);

            while ((right-left+1) - most > k)
            {
                mp[s[left]]--;
                left++;
            }
            ans=max(ans , right-left+1);
        }
        return ans;
    }
};