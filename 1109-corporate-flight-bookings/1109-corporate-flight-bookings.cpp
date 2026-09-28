class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n);
        for (auto v : bookings)
        {
            int st=v[0];
            int end=v[1];
            int seats=v[2];
            for (int i=st ; i<=end ; i++)
                ans[i-1]+=seats;
        }
        return ans;
    }
};