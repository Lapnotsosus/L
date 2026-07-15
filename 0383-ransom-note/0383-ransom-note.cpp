class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int> mag;
        unordered_map<char , int> note;
        for (char x : magazine)
        {
            mag[x]++;
        }
        for (char x : ransomNote)
        {
            note[x]++;
        }
        for(auto x : note)
        {
            if(mag[x.first] < x.second)
            return false;
        }
        return true;
    }
};