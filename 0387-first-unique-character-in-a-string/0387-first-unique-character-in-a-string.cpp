class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        for (char x : s)
        map[x]++;
        int index=-1;
        for (char x : s)
        {
            index++;
            if (map[x] == 1) return index;
        }
        return -1;

    }
};