class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum=0;
        priority_queue<double>pq;
        for (int x : nums){
        sum+=(double)x;
        pq.push((double)x);
        }
        int count =0;
        double half = sum/2.0;
        while (sum>half)
        {
           double x = pq.top();
           pq.pop();

           sum = sum-x + x/2.0;
           count++;
           pq.push(x/2.0);
        }
        return count;
    }
};