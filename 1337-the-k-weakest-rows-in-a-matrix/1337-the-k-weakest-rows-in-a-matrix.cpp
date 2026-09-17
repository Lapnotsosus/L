class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
        >pq;
        for (int i=0 ; i<mat.size() ; i++)
        {
            vector<int> v = mat[i];
            int ones=0;
            for (int x : v)
            {
                if (x==1) ones++;
            }
            pq.push({ones,i});
            ones=0;
        }
        while(k>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};