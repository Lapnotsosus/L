class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for( char c : s)
        mp[c]++;

        priority_queue<pair<int,char>>pq;
        for (auto x : mp)
        pq.push({x.second , x.first});
        string ans="";
        while (!pq.empty())
        {
            int i = pq.top().first;
            char c = pq.top().second;
            for (int j=0 ; j<i ; j++)
            {
                ans+=c;
            }
            pq.pop();
        }
        return ans;
    }
};