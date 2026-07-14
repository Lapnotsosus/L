class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int cnt[1001]={};
        int sum=0;
        for (int x : nums)
        {
            cnt[x]++;
        }
        for (int i=0; i<1001 ; i++)
        {
            if (cnt[i] == 1)
            sum+=i;
        }
        return sum;
    }
};