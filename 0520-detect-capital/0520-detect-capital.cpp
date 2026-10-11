class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        int len = word.length();

        for (int i = 0; i < len; i++) {
            if (isupper(word[i]))
                count++;
        }

        if (isupper(word[0]) && count == 1)
            return true;
        else if (count == len)
            return true;
        else if (count == 0)
            return true;

        return false;
    }
};
