class Solution {
public:
    bool isPalindromic(string s) {
        string b="";
        for (char ch : s)
            {
                int x = ch;

                for (int i=7 ; i>=0 ; i--)
                    b+= ((x >> i) & 1) + '0';
            }
        return b == string(b.rbegin(),b.rend());
    }
};