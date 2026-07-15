class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> s = heights;
        sort(s.begin(),s.end());
        int count=0;
        for (int i=0 ; i<heights.size() ; i++)
        {
            if (heights[i] != s[i])
            count ++;
        }
        return count;
    }
};