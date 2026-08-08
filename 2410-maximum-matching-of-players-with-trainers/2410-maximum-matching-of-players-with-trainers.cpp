class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        int ans=0;
        int i=0;
        for (int j=0; j<t.size(); j++)
        {
            if (i < p.size() && p[i] <= t[j])
            {
                ans++;
                i++;
            }
        }
        return ans;
    }
};