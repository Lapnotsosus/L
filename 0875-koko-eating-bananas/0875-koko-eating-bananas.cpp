class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1;
        int hi=0;
        for (int x : piles)
        hi = max(hi,x);
        while (lo < hi)
        {
            int mid  = lo + (hi-lo)/2;
            int min = 0;
            for (int x : piles)
            {
                min+= ceil((double)x/mid);
            }
            if (min <= h)
            hi = mid;
            else
            lo = mid+1;
        }
        return lo;
    }
};