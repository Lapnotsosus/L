class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0;
        int count=0;
        int mxcnt=0;
        for (int right=0 ; right < s.size() ; right++)
        {
            if(s[right] == 'a' ||s[right] == 'e' ||s[right] == 'i' ||s[right] == 'u' ||s[right] == 'o')
            {
                count++;
            }
            while ((right-left+1) > k)
            {
                if (s[left] =='a' ||s[left] =='e' ||s[left] =='u' ||s[left] =='i' ||s[left] =='o' )
                count--;
                left++;
            }
            mxcnt = max(mxcnt,count);
        }
        return mxcnt;
    }
};