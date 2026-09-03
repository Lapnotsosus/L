class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool even=true;
        bool odd=true;
        for (int x : nums1)
        {
            if (x%2 == 0) odd = false;
            if (x%2 != 0) even = false;
        }
        sort(nums1.begin() , nums1.end());
        int minodd=-1;
        for (int x : nums1)
        {
            if (x%2 != 0)
            {
                minodd = x;
                break;
            }
        }
        bool mixed = true;
        for (int i=0 ; i<nums1.size() ; i++)
        {
            if(nums1[i]%2 == 0 && nums1[i]<minodd)
            mixed = false;
        }
        return even || odd || mixed;
    }
};