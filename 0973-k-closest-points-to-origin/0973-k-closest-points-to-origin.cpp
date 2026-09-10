class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>,
                        vector<pair<int, vector<int>>>,
                        greater<pair<int, vector<int>>>> pq;

        for (auto x : points)
        {
            int a = x[0];
            int b = x[1];
            int distance = a*a + b*b;

            pq.push({distance , x});
        }
        vector<vector<int>>ans;
        for (int i=0 ; i<k ; i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};