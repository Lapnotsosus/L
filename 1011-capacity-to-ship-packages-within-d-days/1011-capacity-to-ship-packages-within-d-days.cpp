class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0;
        int r = 0;

        for (int w : weights) {
            l = max(l, w);
            r += w;
        }

        while (l < r) {
            int mid = l + (r - l) / 2;

            int daysNeeded = 1;
            int currentWeight = 0;

            for (int w : weights) {
                if (currentWeight + w > mid) {
                    daysNeeded++;
                    currentWeight = 0;
                }

                currentWeight += w;
            }

            if (daysNeeded <= days)
                r = mid;
            else
                l = mid + 1;
        }

        return l;
    }
};