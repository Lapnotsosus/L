class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mp;
        for (char c : s)
        mp[c]++;
        for (auto x : mp)
        pq.push({x.second , x.first});

        string ans="";
        while (!pq.empty())
        {
            auto tp1 = pq.top();
            pq.pop();
            ans.push_back(tp1.second);
            tp1.first--;

            if (pq.empty())
            {
                if (tp1.first > 0)
                return "";

                break;
            }

            auto tp2 = pq.top();
            pq.pop();
            ans.push_back(tp2.second);
            tp2.first--;

            if(tp2.first > 0)
            pq.push(tp2);
            if(tp1.first > 0)
            pq.push(tp1);
        }
        return ans;
    }
};