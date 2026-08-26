class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=k;
      unordered_map<int,int>mp;
        for(int x:nums)
            mp[x]++;
        for(int i=1 ; i>0 ; i++)
            {
                k=n*i;
                if(mp[k]==0) return k;
            }
        return 0;
    }
};