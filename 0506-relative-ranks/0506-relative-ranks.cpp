class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        vector<string>ans(score.size());
        for (int i=0 ; i<score.size() ; i++)
        {
            pq.push({score[i],i});
        }
        if (!pq.empty()) {
    ans[pq.top().second] = "Gold Medal";
    pq.pop();
}

if (!pq.empty()) {
    ans[pq.top().second] = "Silver Medal";
    pq.pop();
}

if (!pq.empty()) {
    ans[pq.top().second] = "Bronze Medal";
    pq.pop();
}
        int rank=4;
        while (!pq.empty())
        {
            ans[pq.top().second] = to_string(rank);
            pq.pop();
            rank++;
        }
        return ans;
    }
};