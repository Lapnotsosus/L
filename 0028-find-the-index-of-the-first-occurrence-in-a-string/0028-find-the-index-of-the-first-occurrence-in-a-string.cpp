class Solution {
public:
    int strStr(string s, string target) {
        if (target.size() > s.size()) return -1;
        for(int i=0 ; i <=s.size()-target.size(); i++ )
        {
            string ans= s.substr(i,target.size());
            if (ans == target) return i;
        }
        return -1;
    }
};