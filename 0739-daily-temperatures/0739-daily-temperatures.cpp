class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int size = nums.size();
        stack<int>st;
        vector<int>ans(size,0);
        for (int i=0 ; i<size ; i++)
        {
            while (!st.empty() && nums[i] > nums[st.top()])
            {
                int j = st.top();
                st.pop();

                ans[j] = i-j;
            }
            st.push(i);
        }
        return ans;
    }
};