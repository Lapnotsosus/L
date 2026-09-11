class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for (string s : words)
        mp[s]++;

        auto cmp = [](const pair<int,string>&a , const pair<int,string>&b)
        {
            if (a.first != b.first)
            return a.first < b.first;
            return a.second> b.second;
        };

        priority_queue<pair<int , string>,
        vector<pair<int,string>>,
        decltype(cmp) > pq(cmp);

        for (auto x : mp)
        pq.push({x.second,x.first});


        vector<string>ans;
        for (int i=0 ; i<k ; i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};