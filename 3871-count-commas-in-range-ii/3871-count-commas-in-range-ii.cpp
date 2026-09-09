class Solution {
public:
    long long countCommas(long long n) {
        long long start = 1000;
        long long ans=0;
        long long commas=1;
        while (start <= n)
        {
            long long end = start*1000 -1;
            if (end > n)
            end = n;

            ans+= (end - start + 1)*commas;

            commas++;
            start = start*1000;
        }
        return ans;
    }
};