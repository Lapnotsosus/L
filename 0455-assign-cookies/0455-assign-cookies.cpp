class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        int i=0;
        for (int x : s)
        {
            if(i<g.size() && g[i] <= x)
            {
                count++;
                i++;
            }
        }
        return count;
    }
};