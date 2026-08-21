class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        if (s1.size() > s2.size()) return false;
        for (char x : s1)
        m1[x]++;
        int length=s1.size();
        for (int i=0 ; i<=s2.size() - length ; i++)
        {
            int j = i+length;
            for (int k=i ; k< j ; k++)
            {
                m2[s2[k]]++;
            }
            if (m1 == m2) return true;
            m2.clear();
        }
        return false;
    }
};