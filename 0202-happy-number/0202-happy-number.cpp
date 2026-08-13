class Solution {
public:
    int getsum(int x)
    {
        int sum=0;
        while (x>0)
        {
            sum+= (x%10)*(x%10);
            x/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int>set;
        while(n!=1 && set.find(n) == set.end())
        {
            set.insert(n);
            n=getsum(n);
        }
        return n==1;
    }
};