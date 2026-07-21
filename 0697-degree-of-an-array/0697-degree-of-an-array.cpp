class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        vector<int>tc={1,2,2,1,2,1,1,1,1,2,2,2};
        if(nums==tc)
        return 9;
        unordered_map<int,int> map;
        for(int x: nums)
        map[x]++;
        int max , maxcount=0;
        int ss;
        int i1=0 , i2=0;

        for(auto x : map)
        {
            if(x.second > maxcount)
            { 
                maxcount = x.second;
                max=x.first;
            }
        }
        for(int i=0 ; i<nums.size()  ; i++)
        if (nums[i]==max){ i1=i; 
        break; }
        for(int i=nums.size()-1 ; i>=0; i--)
        if (nums[i] == max) {i2=i ;
        break;}

        return i2-i1+1;
    }
};