class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        int sum=0;
        for (int x : piles)
        {
            pq.push(x);
            sum+=x;
        }

        while (k!=0)
        {
            int x = pq.top();
            pq.pop();
            sum = sum - (x/2);
            pq.push(x - (x/2));
            k--;
        }
        return sum;
    }
};