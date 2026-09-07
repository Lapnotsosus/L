class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        for (char x : s)
        mp[x]++;

        string ans="";
        for (char x : order)
        {
            int i=mp[x];
            while (i>0)
            {
                ans = ans+x;
                i--;
            }
            mp.erase(x);
        }
        for (auto x : mp)
        {
            int i=x.second;
            while (i>0)
            {
                ans+=x.first;
                i--;
            }
        }
        return ans;
    }
};