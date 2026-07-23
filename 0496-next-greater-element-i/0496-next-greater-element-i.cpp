class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size());

        for (int i=0 ; i<nums1.size(); i++)
        {
            bool found=false;
            int max=-1;
            for (int j=0 ; j<nums2.size() ; j++)
            {
                if (nums1[i]==nums2[j]) found=true;
                if (found==true && nums2[j] > nums1[i])
                {
                    max=nums2[j];
                    break;
                }
            }
            ans[i]=max;
        }
        return ans;
    }
};