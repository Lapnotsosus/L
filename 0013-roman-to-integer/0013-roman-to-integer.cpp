class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> e = {
            {'M',1000},
            {'D',500},
            {'C',100},
            {'L',50},
            {'X',10},
            {'V',5},
            {'I',1}
        };
        int ans=0;
        for (int i=0 ; i<s.size(); i++)
        {
            if (i+1 < s.size() && e[s[i]] < e[s[i+1]])
            ans-= e[s[i]];
            else
            ans+= e[s[i]];
        }
        return ans;
    }
};