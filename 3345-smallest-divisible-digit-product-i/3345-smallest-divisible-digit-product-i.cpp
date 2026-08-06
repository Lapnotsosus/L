class Solution {
public:
    int digitprod(int n)
    {
        int prod=1;
        while (n>0)
        {
            prod = prod*(n%10);
            n=n/10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        for (int i=n ; ; i++)
        {
            int prod = digitprod(i);
            if ((prod % t ) == 0)
            {
                return i;
                break;
            }
        }
        return 0;
    }
};