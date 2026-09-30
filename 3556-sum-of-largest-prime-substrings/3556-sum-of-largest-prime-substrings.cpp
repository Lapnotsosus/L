class Solution {
public:
    bool isprime(long long n)
    {
        if (n<2) return false;
        if (n==2) return true;
        if (n%2 == 0) return false;

        for (long long i=3; i*i <= n ; i+=2)
        {
            if (n%i == 0)
            return false;
        }
        return true;
    }
    long long sumOfLargestPrimes(string s) {
        set<long long>substrings;
        for (int i=0 ; i<s.size() ; i++)
        {
            long long n = 0;
            for (int j=i; j<s.size() ; j++)
            {
                n = n*10 + s[j] - '0';
                substrings.insert(n);
            }
        }
        int count=0;
        long long sum=0;
        for (auto it = substrings.rbegin() ; it != substrings.rend(); it++)
        {
            if (isprime(*it))
            {
                count++;
                sum+=*it;
            }
            if (count == 3)
            break;
        }
        return sum;
    }
};