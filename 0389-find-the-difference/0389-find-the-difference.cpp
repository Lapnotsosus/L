class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>map;
        for(char x : t)
        map[x]++;
        for (char x : s)
        map[x]--;

        for (auto x : map)
        {
            if (x.second > 0)
            return x.first;
        }
        return ' ';
    }
};