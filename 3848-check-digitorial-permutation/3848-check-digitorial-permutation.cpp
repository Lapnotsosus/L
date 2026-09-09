class Solution {
public:
    int fact(int n)
    {
        if (n==0 || n==1)
        return 1;
        
        return n* fact(n-1);
    }
    bool isDigitorialPermutation(int n) {
        int ans=0;
        int num=n;
        while (n>0)
        {
            ans+=fact(n%10);
            n=n/10;
        }
        int freq1[10]={};
        int freq2[10]={};
        while (num>0)
        {
            freq1[num%10]++;
            num/=10;
        }
        while (ans>0)
        {
            freq2[ans%10]++;
            ans/=10;
        }
        for (int i=0 ; i<10 ; i++)
        {
            if (freq1[i] != freq2[i])
            return false;
        }
        return true;
    }
};