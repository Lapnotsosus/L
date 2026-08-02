class Solution {
public:
    int countValidPrefixes(string s) {
        int count=0;
        int zero=0;
        int one=0;

        for (char x : s)
        {
            if (x=='0') zero++;
            else one++;
            if (abs(zero-one)<=1) count++;
        }
        return count;
    }
};