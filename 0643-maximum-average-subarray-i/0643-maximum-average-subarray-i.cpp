class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

        // First window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double ans = (double)sum / k;

        int left = 0;

        for (int right = k; right < nums.size(); right++) {
            sum -= nums[left];
            sum += nums[right];

            left++;

            ans = max(ans, (double)sum / k);
        }

        return ans;
    }
};